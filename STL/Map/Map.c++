#include <bits/stdc++.h>
using namespace std;


int main() {
    // map<int, int> m;
    
    // m.insert({1, 100});
    // m.insert({2, 300});
    // m.insert({3, 400});
    // m[4];
    // m[5] = 122;
    // for(auto i : m) {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    map<int, string>m;
    m.insert({1, "Vikas"});
    m.insert({2, "Narender"});
    m.insert({3, "Prashant"});
    m.insert({4, "Pankaj"});
    m.insert({5, "Yash"});
    for(auto i : m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    // auto it = m.upper_bound(2);
    // if(it != m.end()) {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    // else cout<<"No equal or greater";
    cout<<"After erase : "<<endl;
    m.erase(m.find(2), m.end());
    for(auto i : m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"size : "<<m.size();
    return 0;
}