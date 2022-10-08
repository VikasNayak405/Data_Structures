#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> m;
    m.insert(10);
    m.insert(30);
    m.insert(14);
    m.insert(10);
    // for(auto i : m) {
    //     cout<<i<<" ";
    // }
    auto it = m.equal_range(10);
    cout<<*it.first<<" "<<*it.second<<endl;
    return 0;
}