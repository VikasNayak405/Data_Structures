/* You are given two arrays A and B each containing N numbers. 
You need to choose exactly one number from A and exactly one number from B 
such that the index of the two chosen numbers is not same and the sum of the 2 chosen values is minimum.
Formally, if you chose ith element from A whose value is x and jth element from B whose value is y, 
you need to minimize the value of (x+y) such that i is not equal to j.
Your objective is to find this minimum value.
NOTE: If not possible print "-1" without quotes. 

Input:
1
5
5 4 3 2 1
1 2 3 4 5

Output:
2

*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long getMin(long long A[], long long B[], long long n)
    {
        // Your code goes here
        if(n == 1) return -1;
        long long ans = -1;
        vector<pair<long long, long long>> a;
        vector<pair<long long, long long>> b;
        for(int i = 0; i < n; i++) 
            a.push_back({A[i], i});
        for(int i = 0; i < n; i++) 
            b.push_back({B[i], i});
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a[0].second != b[0].second)
            ans = a[0].first + b[0].first;
        else 
            ans = min(a[0].first + b[1].first, a[1].first + b[0].first);
        
        return ans;
    }
};

int main() {
    long long n, i;
    cin>>n;
    long long A[n+1], B[n+1];
    for(int i = 0; i < n; i++)
        cin>>A[i];
    for(int i = 0; i < n; i++)
        cin>>B[i];
    Solution sol;
    cout<<sol.getMin(A, B, n)<<endl;

    return 0;
}