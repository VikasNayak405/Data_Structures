#include <bits/stdc++.h>
using namespace std;


void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int a[n1];
    int b[n2];
    for(int i = 0; i < n1; i++) {
        a[i] = arr[low + i];
    }
    for(int i  = 0; i < n2; i++) {
        b[i] = arr[mid+1+i];
    }
    int i=0, j = 0;
    int k = low;
    while( i < n1 && j < n2) {
        if(a[i] < b[j]) {
            arr[k++] = a[i++];
        }
        else {
            arr[k++] = b[j++];
        }
    }
    while(i < n1) {
        arr[k++] = a[i++];
    }
    while(j < n2) {
        arr[k++] = b[j++];
    }
}

void mergeSort(int arr[], int low, int high) {
    if(low < high) {
        int mid = (low + high)/2;
        mergeSort(arr,low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);

    }
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {6,3,5,2,9,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    print(arr, n);
    return 0;
}