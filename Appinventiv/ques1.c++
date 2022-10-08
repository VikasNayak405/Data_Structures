#include <bits/stdc++.h>
using namespace std;

class solution {
    public : 
    int LargestSmallestSum(int arr[], int n) {
        vector<int> v1;
        vector<int> v2;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0)  {
                v1.push_back(arr[i]);
            }
            else 
                v2.push_back(arr[i]);
        }
        sort(v1.begin(), v1.end(), greater<int>());
        sort(v2.begin(), v2.end(), greater<int>());
        int sum = v1[1] + v2[1];
        return sum;
    }
};

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    solution s;
    int fun = s.LargestSmallestSum(arr, n);
    cout<<fun<<endl;
    
    return 0;
}