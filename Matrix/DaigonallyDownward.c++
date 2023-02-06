#include<bits/stdc++.h>
using namespace std;

class solution {
    public : 
    vector<int> DownwardDiagonally(vector<vector<int>>arr, int n) {
        vector<int>ans;
        for(int i = 0; i < n; i++) {
            int row = 0, col = i;
            while(col >= 0 && i < n) {
                ans.push_back(arr[row][col]);
                row++;
                col--;
            }
        }
        for(int i = 1; i < n; i++) {
            int row = i, col = n-1;
            while(col >= 0 && row < n) {
                ans.push_back(arr[row][col]);
                row++;
                col--;
            }
        }
        return ans;
    }
};
 
int main() {
   int n;
   cin>>n;
   vector<vector<int>> arr(n, vector<int>(n));
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        cin>>arr[i][j];
    }
   }
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   solution sol;
   vector<int> ans = sol.DownwardDiagonally(arr, n);
   for(auto i : ans) {
    cout<<i<<" ";
   }
   return 0;
}