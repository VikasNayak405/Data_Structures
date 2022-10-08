#include <bits/stdc++.h>
using namespace std;

void NextGreaterEle(int arr[], int n) {
    //vector<int>ans;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n-1; j++) {
            if(arr[i] < arr[j]) {
                cout<<arr[j]<<" ";
                break;
            }
            if(j == n) 
                cout<<"-1"<<" ";
        }
    }
    
}

int main() { 
    int arr[] = {5, 15, 10, 8, 6, 12, 9, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    NextGreaterEle(arr, n);
    return 0;
}