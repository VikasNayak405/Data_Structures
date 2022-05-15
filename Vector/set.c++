#include<iostream>
#include <set>
#include <iterator>
using namespace std;

int main() {
    set<int, greater<int>> s;
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(10);
    s.insert(9);
    s.insert(7);
    s.erase(7);
    
    cout<<s.size()<<endl;
    set<int> :: iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
    if(s.find(4) != s.end()) {
        cout<<"Found"<<endl;
    }
    else cout<<"Not Found"<<endl;
}