// Find whether an array is subset of another array

#include <bits/stdc++.h>
using namespace std;


bool isSubset(int arr1[], int arr2[], int n, int m) {
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    int i = 0; 
    int j = 0;
     if (m > n)
        return 0;
    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            i++;
        }
        else if(arr1[i] > arr2[j]) {
            j++;
        }
        else {
            i++;
            j++;
        }
    }
    return (j < m) ? false : true;
}


int main() {
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };
 
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    cout<<isSubset(arr1, arr2, n, m);
    return 0;
}