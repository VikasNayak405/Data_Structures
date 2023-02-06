//diagonal form printing of matrix..
#include <bits/stdc++.h>
using namespace std;

class solution {
    public : vector<int> downwardDiagonal(int n, vector<vector<int>> A) {
        vector<int> ans;
        
        for(int i = 0; i < n; i++) {
            int row = 0, col = i;
            while(col >= 0 && i < n) {
                ans.push_back(A[row][col]);
                row++;
                col--;
            }
        }
        for(int i = 1; i < n; i++) {
            int row = i, col = n-1;
            while(row < n && col >= 0) {
                ans.push_back(A[row][col]);
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
    vector<vector <int>> A(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin>>A[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    solution sol;
    vector<int> ans = sol.downwardDiagonal(n, A);
    for(auto i : ans) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}