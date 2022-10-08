#include <bits/stdc++.h>

using namespace std;

int FindPeak(int arr[], int n) {

    if(n == 1)
        return 0;
    if(arr[0] >= arr[1]) {
        return 0;
    }
    if(arr[n-1] >= arr[n-2]) {
        return n-1;
    }
    int i;
    for(i = 0; i < n; i++) {
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) {
            return i;
        }
    }
    return i;
}

int main() {
    int arr[] = {2, 3, 6, 1, 8 , 23, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Peak Number : "<<FindPeak(arr, n);
    
    return 0;
}