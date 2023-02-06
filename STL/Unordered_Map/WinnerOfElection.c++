#include<bits/stdc++.h>
using namespace std;
 
class solution {
    public : 
    string findWinner(string arr[], int n) {
        unordered_map<string, int>m;
        for(int i = 0; i < n; i++) {
            m[arr[i]]++;
        }
        string winner = "";
        for(auto x : m) {
            int max = 0;
            if(x.second > max) {
                max = x.second;
                winner = x.first;
            }
        }
        return winner;
    }
};

int main() {
   string arr[] = {"abc","xyz", "abc", "pqr", "abc", "xyz"};
   int n = sizeof(arr)/sizeof(arr[0]);
   solution sol;
   auto ans = sol.findWinner(arr, n);
   cout<<ans<<endl;
   return 0;
}