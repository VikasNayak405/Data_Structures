#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n) {
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

int main() {
    int arr[] = {12, 45, 23, 51, 19, 10, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);
    return 0;
}