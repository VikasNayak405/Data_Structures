#include <bits/stdc++.h>
using namespace std;

int Kadane(int arr[], int n) {
    int final_max = INT_MIN;
    int mid_max = 0;
    for(int i = 0; i < n; i++) {
        mid_max = mid_max + arr[i];
        if(final_max < mid_max) {
            final_max = mid_max;
        }
        if(mid_max < 0) 
            mid_max = 0;
    }
    return final_max;
}

int main() {
    int arr1[] =  {1, -1, 3, 2, -7, -5, 11, 6 }; 
    
    int n = sizeof(arr1)/sizeof(arr1[0]);
    cout<<Kadane(arr1, n);
    return 0;
}