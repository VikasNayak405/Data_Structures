// Rearrange the array in alternating positive and negative items with O(1) extra space

#include <bits/stdc++.h>
using namespace std;

void maxMinArrange(int arr[], int n) {
    sort(arr, arr+n);
    vector<int>ans;
    for(int i = 0; i < n; i++) {
        ans.push_back(arr[n-1-i]);
        ans.push_back(arr[i]);
    }

    for(int i = 0; i < n; i++) {
        arr[i] = ans[i];
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

}

int main() {
    int arr[] = {10,20,30,40,50,60,70,80,90,100,110};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxMinArrange(arr, n);
}