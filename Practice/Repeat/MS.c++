#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int a1[n1];
    int a2[n2];
    for(int i = 0; i < n1; i++) {
        a1[i] = arr[low+i];
    }
    for(int i = 0; i < n2; i++) {
        a2[i] = arr[mid+1+i];
    }
    int i = 0, j = 0;
    int k = low;
    while(i < n1 && j < n2) {
        if(a1[i] < a2[j]) 
            arr[k++] = a1[i++];
        else 
            arr[k++] = a2[j++];
    }
    while(i < n1) {
        arr[k++] = a1[i++];
    }
    while(j < n2) {
        arr[k++] = a2[j++];
    }
}

void mergesort(int arr[], int low, int high) {
    if(low < high) {
        int mid = (low + high)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
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
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    mergesort(arr, 0, n-1);
    print(arr, n);

    return 0;
}