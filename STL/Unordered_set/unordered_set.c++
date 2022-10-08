#include<bits/stdc++.h>
using namespace std;
 
int main() {
   
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(25);
    
    for(auto x : s) {
        cout<<x<<" ";
    }
    if(s.find(20) == s.end()) {
        cout<<"Not Found"<<endl;
    }
    else cout<<"found"<<endl;
   return 0;
}
//
//