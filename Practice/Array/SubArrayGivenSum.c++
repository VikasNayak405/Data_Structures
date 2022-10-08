// Find subarray with given sum | Set 1 (Nonnegative Numbers)

#include <bits/stdc++.h>
using namespace std;

int subArraySum(int arr[], int n, int sum) {
    int curr = arr[0], start = 0; 
    int i;
    for(i = 1; i <= n; i++) {
        while(curr > sum && start < i-1) {
            curr = curr - arr[start];
            start++;
        }
        if(curr == sum) {
            cout<<start<<" "<<i-1;
            return 1;
        }
        if(i < n)
            curr = curr + arr[i];
    }
    cout<<"no subarray found";
    return 0;
}

int main() {
    int arr[] = {1, 4, 20,3, 5, 10, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    subArraySum(arr, n, 30);

    return 0;
}