#include<bits/stdc++.h>
using namespace std;

class solution {
    public : 
    vector<int> ReverseSpiral(vector<vector <int>> arr, int row, int col) {
        vector<int> ans;
        int top = 0, left = 0, bottom = row - 1, right = col - 1;
        int dir = 1;
        while(left <= right && top <= bottom) {
            if(dir == 1) {
                for(int i = left; i <= right; i++)
                    ans.push_back(arr[top][i]);
                top++;
                dir = 2;
            }
            else if(dir == 2) {
                for(int i = top; i <= bottom; i++)
                    ans.push_back(arr[i][right]);
                right--;
                dir = 3;
            }
            else if(dir == 3) {
                for(int i = right; i >= left; i--) 
                    ans.push_back(arr[bottom][i]);
                bottom--;
                dir = 4;
            }
            else if(dir == 4) {
                for(int i = bottom; i >= top; i--) 
                    ans.push_back(arr[i][left]);
                left++;
                dir = 1;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
   int row, col;
   cin>>row>>col;
   vector<vector<int>> arr(row);
   for(int i = 0; i < row; i++) {
    arr[i].assign(col, 0);
    for(int j = 0; j < col; j++) {
        cin>>arr[i][j];
    }
   }
   for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   solution sol;
   vector<int> ans = sol.ReverseSpiral(arr, row, col);
   for(auto i : ans) {
    cout<<i<<" ";
   }
   return 0;
}