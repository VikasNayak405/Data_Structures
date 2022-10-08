#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n) {
    int count = 1;
    while(count < n) {
        for(int i = 0; i < n-count; i++) {
            if(arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionsort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int curr = arr[i];
        int j = i-1;
        while(arr[j] > curr && j >= 0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionsort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int a[n1];
    int b[n2];
    for(int i = 0; i < n1; i++) {
        a[i] = arr[low + i];
    }
    for(int i = 0; i < n2; i++) {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = low;
    if(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            arr[k++] = a[i++];
        }
        else {
            arr[k++] = b[j++];
        }
        while(i < n1) {
            arr[k++] = a[i++];
        }
        while(j < n2) {
            arr[k++] = b[j++];
        }
    }
}

void mergesort(int arr[], int low, int high) {
    if(high > low) {
        int mid = (low + high)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j <= high - 1; j++) {
        if(arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
    }
    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return i+1;
}

void quicksort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    // int arr[] = {12, 45, 23, 51, 19, 10, 8};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n;
    cout<<"enter the no. for input values : ";
    cin>>n;
    int arr[n];
    cout<<"enter values : ";
    for(int i = 0; i <= n; i++) {
        cin>>arr[i];
    }
    cout<<"Bubble Sort : ";
    bubblesort(arr, n);
    cout<<"Insertion Sort : ";
    insertionsort(arr, n);
    cout<<"Selection Sort : ";
    selectionsort(arr, n);
    cout<<"Merge Sort : ";
    mergesort(arr, 0, n-1);
    print(arr, n);
    cout<<"Quick Sort : ";
    quicksort(arr, 0, n-1);
    print(arr, n);
    return 0;
}