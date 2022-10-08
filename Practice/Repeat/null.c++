#include <bits/stdc++.h>
using namespace std;


void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int>ans;
        for(int i = 0; i < n; i++) {
            if(arr[i] > 0) {
                ans.push_back(arr[i]);
            }
        }
        for(int i = 0; i < n; i++) {
            if(arr[i] < 0) {
                ans.push_back(arr[i]);
            }
        }
        for(int i = 0; i < ans.size(); i++) {
            arr[i] = ans[i];
        }
    }


int main() {
    int arr1[] =  {1, -1, 3, 2, -7, -5, 11, 6 }; 
    
    int n = sizeof(arr1)/sizeof(arr1[0]);
    
    // kthElement(arr1, arr2, n, m, 5);
    segregateElements(arr1, n);
    
    return 0;
}

