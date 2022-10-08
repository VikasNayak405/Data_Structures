#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    
    for(int i = 1; i < n; i++) {
        int curr = arr[i];
        int j = i-1;
        while(arr[j] > curr && j >= 0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {12, 45, 23, 51, 19, 10, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    print(arr, n);
    return 0;
}