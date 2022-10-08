#include <bits/stdc++.h>
using namespace std;

string ispalindrome(string s) {
    string p = s;
    reverse(p.begin(), p.end());
    if(s == p) {
        return "Yes";
    }
    else 
        return "No";
}

int main() {
    string s;
    cin>> s;
    cout<<ispalindrome(s);

    return 0;
}