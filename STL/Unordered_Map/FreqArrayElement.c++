//Frequency of an Array Element.

#include<bits/stdc++.h>
using namespace std;
 
class solution {
    public : 
    void Frequency(int arr[], int n) {
        unordered_map<int, int>m;
        for(int i = 0; i < n; i++) {
            m[arr[i]]++;
        }
        for(auto x : m) {
            cout<<x.first<<" - "<<x.second<<endl;
        }
    }
};

int main() {
   int arr[] = {10, 5, 20, 5, 10};
   int n = sizeof(arr)/sizeof(arr[0]);
   solution sol;
   sol.Frequency(arr, n);
   
   return 0;
}

//