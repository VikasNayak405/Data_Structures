#include <iostream>
#include<algorithm>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

void SelectionSort(int arr[], int n) {
    int i,j,low;
    for(i = 0; i < n-1; i++) {
        low = i;
        for(j = i+1; j < n; j++) {
            if(arr[j] < arr[low])
                low = j;
        }
        swap(arr[low],arr[i]);
    }
}


void InsertionSort(int arr[], int n) { //stable best case is O(n) worst is O(n*n)
    for(int i = 1; i < n-1; i++) {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


void MergeSort(int arr[], int n) { //stable  best case is O(logn)
    
}


void print(int arr[], int size){
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {23,32,11,24,2,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    //BubbleSort(arr,n);
    InsertionSort(arr, n);
    //BubbleSort(arr,n);
    cout<<"Sorted Array : ";
    print(arr, n);
    return 0;
}