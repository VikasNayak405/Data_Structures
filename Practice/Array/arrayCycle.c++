#include <bits/stdc++.h>
using namespace std;

void arrayCycle(int arr[], int n) {
    int x = arr[n-1];
    for(int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];  
    }
    arr[0] = x;
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrayCycle(arr, n);

    return 0;
}