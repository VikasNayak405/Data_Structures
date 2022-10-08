/* Given an array of N integers, and an integer K, 
find the number of pairs of elements in the array whose sum is equal to K.

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6. */

#include <bits/stdc++.h>
using namespace std;


class solution {
    public :
     int getPairsCount(int arr[], int n, int k) {
            int sum = 0;
            int count = 0;
            for(int i = 0; i < n; i++) {
                if(arr[i] < k && sum < k) {
                    sum = sum + arr[i];
                }
                if(sum == k) {
                    count++;
                }
            }
        return 0;
    }
};

int main() {
    int n,k;
    cout<<"Enter n and k : ";
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    solution sol;
    auto ans = sol.getPairsCount(arr, n, k);
    cout<<ans<<endl;

    return 0;

}