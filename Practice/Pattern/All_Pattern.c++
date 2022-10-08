#include <bits/stdc++.h>
using namespace std;

void rectangle(int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void hollow_Rect(int row, int col) {
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= col; j++) {
            if(i == 1 || i == row || j == 1 ||j == col) {
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void inverted_half_pyramid(int row, int col) {
    for( int i = 0; i < row; i++) {
        for( int j = col-i; j > 0; j--) {
            cout<<"* ";
        }
    cout<<endl;
    }
}

void rightTriangle(int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < i+1; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void leftSidedTriangle(int row, int col) {
    for(int i = row; i > 0; i--) {
        for(int j = 0; j <= col; j++) {
            if(j >= i) {
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void rightNumPyramid(int row, int col) {
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= i; j++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void mirrorLeftSidedTriangle(int row, int col) {
    // for(int i = 0; i <= row; i++) {
    //     for(int j = col; j > 0; j--) {
    //         if(j <= i) {
    //             cout<<" *";
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
}

void floydTriangle(int row, int col) {
    int count = 1;
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j < i+1; j++) {
            cout<<count<<" ";
            count++;
            
        }
        cout<<endl;
    }
}

void Butterfly(int row, int col) {
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= i; j++) {
            cout<<"* ";
        }
        int space = 2*row - 2*i;
        for(int j = 1; j <= space; j++) {
            cout<<"  ";
        }
        for(int j = 1; j <= i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = row; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout<<"* ";
        }
        int space = 2*row - 2*i;
        for(int j = 1; j <= space; j++) {
            cout<<"  ";
        }
        for(int j = 1; j <= i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void invertedFloyd(int row, int col) {
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col+1-i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main() {

    // int row, col;
    // rectangle(4, 5);
    // cout<<endl;
    // hollow_Rect(4,5);
    // cout<<endl;
    // inverted_half_pyramid(5,5);
    // cout<<endl;
    // rightTriangle(5, 5);
    // cout<<endl;
    // leftSidedTriangle(5, 5);
    // cout<<endl;
    // rightNumPyramid(5,5);
    // cout<<endl;
    // floydTriangle(5, 5);
    // cout<<endl;
    // mirrorLeftSidedTriangle(5,5);
    // Butterfly(5,5);
    invertedFloyd(5,5);
    return 0;
}