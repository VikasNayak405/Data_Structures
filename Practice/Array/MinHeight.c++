// Minimize the maximum difference between the heights

#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
    sort(arr, arr+n);
    int ans = arr[n-1] - arr[0];
    int tempmin = arr[0], tempmax = arr[n-1];
    for(int i = 1; i < n; i++) {
        if(arr[i] - k < 0)
            continue;
        tempmin = min(arr[0] + k, arr[i]-k);
        tempmax = max(arr[i-1]+k, arr[n-1]-k);
        ans = min(ans, tempmax -tempmin);
    }
    return ans;
}

int main() {
    int arr1[] =  { 7, 4, 8, 8, 8, 9};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    cout<<getMinDiff(arr1,6 ,6);
}