#include<bits/stdc++.h>
using namespace std;
 
class solution {
    public : 
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        vector<long long>ans;
        int temp = 0;
        for(int i = 0; i < n; i++) {
            int j = i-1;
            
                if(arr[j] < arr[i]) {
                    temp = arr[i] - arr[j];
                    ans.push_back(temp);
                }
            
        }
        return ans;
    }
};

int main() {
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i = 0; i < n; i++) {
    cin>>arr[i];
   }
   solution sol;
   vector<long long> v = sol.smallerSum(n, arr);
   for(int i = 0; i < n; i++){
    if( i != n-1) {
        cout<<v[i]<<" ";
    }
    else {
        cout<<v[i]<<" ";
    }
   }
   return 0;
}