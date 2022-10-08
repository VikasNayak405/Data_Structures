#include <bits/stdc++.h>
using namespace std;

void Union(int arr1[], int arr2[],int arr3[], int n, int m) {
    int i = 0, j =0;
    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            cout<<arr1[i++]<<" ";
        }
        else if(arr1[i] < arr2[j]) {
            cout<<arr2[j++]<<" ";
        }
        else {
            cout<<arr2[j++]<<" ";
            
        }
    }
    while(i < n) {cout<<arr1[i++]<<" ";}
    while(j < m) {cout<<arr2[j++]<<" ";}
}

void print(int arr[], int k) {
    for(int i = 0; i < k; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr1[] = {1,3,4,5,7};
    int arr2[] = {2,3,5,6};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n+m];
    Union(arr1, arr2, arr3, n, m);
    // print(arr3, n+m);
    return 0;
}