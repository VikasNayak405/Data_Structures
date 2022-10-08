#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n, int start, int end) {
    while(start  < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"reverse an array : ";
    reverse(arr, n, 0, n-1);

    return 0;
}