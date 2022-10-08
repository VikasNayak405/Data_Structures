#include<bits/stdc++.h>
using namespace std;
 
class solution {
    public : 
    void intersection(int a[], int n, int b[], int m) {
        unordered_set<int>s;
        for(int j = 0; j < m; j++) {
            s.insert(b[j]);
        }
        for(int i = 0; i < n; i++) {
            if(s.find(a[i]) == s.end()) {
                cout<<a[i]<<" ";
            }
        }
    }
};


int main() {
   int n;
   cin>>n;
   int a1[n];
   for(int i = 0; i < n; i++) {
    cin>>a1[i];
   }
   int m;
   cin>>m;
   int a2[m];
   for(int i = 0; i < m; i++) {
    cin>>a2[i];
   }
   solution sol;
   sol.intersection(a1, n, a2, m);
   return 0;
}