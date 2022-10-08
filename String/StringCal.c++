#include<bits/stdc++.h>
using namespace std;
 
void unions(int a[], int b[], int n, int m) {
    set<int>s;
    for(int i = 0; i < n; i++) {
        s.insert(a[i]);
    }
    for(int i = 0; i < m; i++) {
        s.insert(b[i]);
    }
    // return s;
    for(auto i : s)
        cout<<i<<" ";
}




int main() {
   int arr1[] = {2, 4, 5, 6,7 ,8};
   int arr2[] = {3, 4, 5, 2 };
   int n = sizeof(arr1)/sizeof(arr1[0]);
   int m = sizeof(arr2)/sizeof(arr2[0]);

   unions(arr1, arr2, n, m);
   
   return 0;
}