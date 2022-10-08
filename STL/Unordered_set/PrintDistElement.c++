#include<bits/stdc++.h>
using namespace std;
 
class solution {
    public : 
    void printDistinctElement(int arr[], int n) {
        unordered_set<int> ans(arr, arr+n);
        for(auto i : ans) {
            cout<<i<<" ";
        }
    }
};

int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i = 0; i < n; i++) {
    cin>>arr[i];
   }
    solution sol;
    sol.printDistinctElement(arr, n);
   return 0;
}