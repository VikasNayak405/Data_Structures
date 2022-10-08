#include<bits/stdc++.h>
using namespace std;

class solution {
    public : 
    void printRepeatingEle(int arr[], int n) {
        unordered_set<int>s;
        for(int i = 0; i < n; i++) {
            if(s.find(arr[i]) == s.end()) {
                s.insert(arr[i]);
            }
            else cout<<arr[i]<<" ";
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
   sol.printRepeatingEle(arr, n);
   return 0;
}