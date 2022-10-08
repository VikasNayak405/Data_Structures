#include <bits/stdc++.h>
using namespace std;

void arrRotate(int arr[], int k, int n) {
    int j = 0;
    while(j <= k) {
        int last = arr[0];
        for(int i = 0; i < n-1; i++) {
            arr[i] = arr[i+1];

        }
        arr[n-1] = last;
        j++;
    }
    
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n, d;
    cin>>n >> d;
    int arr[n];
    for(int i =0; i < n; i++) {
        cin>>arr[i];
    }
    arrRotate(arr, d-1, n);
    print(arr, n);
    return 0;
}