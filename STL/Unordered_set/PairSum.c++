#include<bits/stdc++.h>
using namespace std;
 
class solution {
    public : 
    bool isPair(int arr[], int n, int sum) {
        unordered_set<int>s;
        for(int i = 0; i < n; i++) {
            if(s.find(sum - arr[i]) ==  s.end()) {
                return true;
            }
            else s.insert(arr[i]);
        }
        return false;
    }
};

int main() {
   int n;
   int arr[n];
   cin>>n;
   for(int i = 0;i < n; i++) {
    cin>>arr[i];
   }
   int sum;
   cin>>sum;
   solution sol;
   if(sol.isPair(arr, n, sum)) {
    cout<<"true"<<endl;
   }
   else cout<<"false"<<endl;

   return 0;
}