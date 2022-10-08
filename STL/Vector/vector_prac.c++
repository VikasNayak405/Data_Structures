#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> ans;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n; i++) {
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++) {
        ans.push_back(arr[i]);
    }
    for(int i : ans) {
        cout<<i<<" ";
    }
    ans.insert(ans.begin(), 100);
    cout<<endl<<ans.front();
    cout<<endl<<ans.back();
    return 0;

}