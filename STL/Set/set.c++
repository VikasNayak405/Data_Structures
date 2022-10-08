#include <bits/stdc++.h>
using namespace std;


int main() {
    set<int, greater<int> >s;
    s.insert(20);
    s.insert(12);
    s.insert(35);
    s.insert(17);
    s.insert(20);
    for(auto x : s) {
        cout<<x<<" ";
    }
       // s.clear();
    auto it = s.lower_bound(11);
    // s.erase(it, s.end());
    cout<<endl;
    if(it != s.end()) {
        cout<<*it<<" ";
    }
    else
        cout<<"fuck"<<endl;
    // cout<<endl;
    // for(auto x : s)
    //     cout<<x<<" ";
    
    return 0;
}



