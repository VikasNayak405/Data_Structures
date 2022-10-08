#include <bits/stdc++.h>
using namespace std;

void SortedWithIndex(int arr[], int n) {
    vector<pair<int, int>> ans;
    for(int i = 0; i < n; i++) {
        ans.push_back({arr[i], i});
    }
    sort(ans.begin(), ans.end());
    for(auto i : ans) {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
    


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    SortedWithIndex(arr, n);
    return 0;
}