#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n) {
    int count = 1;
    while(count < n) {
        for(int i = 0; i < n-count; i++) {
            if(arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
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
        int j =  i-1;
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
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
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

    // bubblesort(arr, n);
    // insertionsort(arr, n);
    selectionsort(arr, n);

    return 0;
}