#include <iostream>
#include<bits/stdc++.h>
#include <vector>

using namespace std;

void sort_0_2_1(int arr[], int n) {
    vector<int>ans;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0)
        ans.push_back(arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == 2)
        ans.push_back(arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1)
        ans.push_back(arr[i]);
    }
    for(auto i : ans) {
        cout<<i <<" ";
    }
}

int main() {
    int arr[] = {1, 2, 1, 1, 0, 2, 1, 0};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sort_0_2_1(arr, n);
    return 0;
}

