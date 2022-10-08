// Find common elements in three sorted arrays

#include <bits/stdc++.h>
using namespace std;

void FindCommon(int ar1[], int ar2[], int ar3[], int n, int m, int o) {
    int x = 0, y = 0, z = 0;
    while(x < n && y < m && z < o) {
        if(ar1[x] == ar2[y] && ar2[y] == ar3[z] && ar1[x] == ar3[z]) {
            cout<<ar1[x]<<" ";
            x++;
            y++;
            z++;
        }
        else if(ar1[x] < ar2[y]) {
            x++;
        }
        else if(ar1[x] > ar2[y]) {
            y++;
        }
        else {
            z++;
        }
    }
}



int main() {
    int ar1[] = {1, 5, 10, 20, 40, 80};
    int ar2[] = {6, 7, 20, 80, 100};
    int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n = sizeof(ar1)/sizeof(ar1[0]);
    int m = sizeof(ar2)/sizeof(ar2[0]);
    int o = sizeof(ar3)/sizeof(ar3[0]);
    FindCommon(ar1, ar2, ar3, n, m, o);
    return 0;
}