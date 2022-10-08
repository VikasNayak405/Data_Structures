#include <bits/stdc++.h>
using namespace std;

void reverse(string str) {
    stack<char>s;
    int n = str.length();
    for(int i = 0; i < n; i++) {
        s.push(str[i]);
    }
    for(int i = 0; i < n; i++) {
        str[i] = s.top();
        s.pop();
    }
    cout<<str<<endl;
    
}

void reverse_inbuild(string str) {
    reverse(str.begin(), str.end());
    cout<<str<<endl;
}


int main() {
    
    string str;
    cin>>str;
    reverse(str);
    reverse_inbuild(str);
    return 0;
}