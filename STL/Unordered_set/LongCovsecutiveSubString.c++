#include<bits/stdc++.h>
using namespace std;

class solution {
    public : 
    int findLongest(int arr[], int n) {
        sort(arr, arr+n);
        int res = 1, curr = 1;
        for(int i = 1; i < n; i++) {
            if(arr[i] == arr[i-1] + 1) {
                curr++;
            }
            else {
                res = max(curr, res);
                curr = 1;
            }
        }
        res = max(res, curr);
        return res;
    }
};

int main() {
   int n;
   int arr[n];
   cin>>n;
   for(int i = 0; i < n; i++) {
        cin>>arr[i];
   }
   solution s1, s2;
   auto ans = s1.findLongest(arr, n);
   cout<<ans<<" ";
   return 0;
}