#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int removeDup(int arr[], int n) {
    
    int arr2[n];
    if(n ==0 || n==1)
        return n;
    int i = 0;
    int j = 0;
    for(i = 0; i < n-1; i++) {
        if(arr[i] != arr[i+1])
            arr2[j++] = arr[i];
    }
    arr2[j++] = arr[n-1];
    return i;

}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {1, 6, 8, 3, 5,1,2,3, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    removeDup(arr, n);
    print(arr, n);
    return 0;
}