#include <bits/stdc++.h>
using namespace std;
#define R 3
#define C 3


void spiralPrint(int row_end, int col_end, int arr[R][C]) {
    int row_first = 0;
    int col_first = 0;
    while(row_first < row_end && col_first < col_end) {
        for(int i = col_first; i < col_end; ++i) {
            cout << arr[row_first][i] << " ";
        }
        row_first++;

        for(int i = row_first; i < row_end; ++i) {
            cout<<arr[i][col_end] <<" ";
        }
        col_end--;

        while(row_first < row_end) {
            for(int i = col_end-1; i >= col_first; --i) {
                cout<<arr[row_first-1][i]<<" ";
            }
            row_first--;
        }

        while(col_first < col_end) {
            for(int i = row_end - 1; i >= row_first; --i) {
                cout<<arr[i][col_end]<<" ";
            }
            row_end++;
        }

    }
}

int main() {
    int arr[R][C] = {{1,2,3}, {4,5,6}, {7,8,9}};
    
    spiralPrint(R, C, arr);
    return 0;
}