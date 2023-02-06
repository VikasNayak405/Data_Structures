//reverse each word in a sentance....

#include <bits/stdc++.h>
using namespace std;

class solution {
    public : 
    string reverseSentence(string s) {
    int l = 0, r = 0;
        while(l < s.size()) {
            while(r < s.size() && s[r] != '.') {
                r++;
            }
            reverse(s.begin() + l, s.begin() + r);
            l = r+1;
            r = l;
        }
        return s;
}
};

int main() {
    string s1;
    cin>>s1;
    solution sol;
    cout<<sol.reverseSentence(s1);
    return 0;
}