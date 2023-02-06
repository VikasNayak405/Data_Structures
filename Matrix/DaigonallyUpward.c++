#include<bits/stdc++.h>  //galat hai bhai ye
using namespace std;

class solution {
    public : 
    vector<int> UpwardDiagonally(vector<vector<int>>arr, int n) {
        vector<int>ans;
        vector<int>final;
        for(int i = 0; i < n; i++) {
            int row = 0, col = i;
            while(col >= 0 && i < n) {
                ans.push_back(arr[row][col]);
                row++;
                col--;
            }
            reverse(ans.begin(), ans.end());
            final.insert(final.begin(), ans.begin(), ans.end());
            ans.clear();
        }
        for(int i = 1; i < n; i++) {
            int row = i, col = n-1;
            while(col >= 0 && row < n) {
                ans.push_back(arr[row][col]);
                row++;
                col--;
            }
            reverse(ans.begin(), ans.end());
            final.insert(final.begin(), ans.begin(), ans.end());
            ans.clear();
        }
        //reverse(final.begin(), final.end());
        return final;
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
   vector<int> ans = sol.UpwardDiagonally(arr, n);
   for(auto i : ans) {
    cout<<i<<" ";
   }
   return 0;
}