#include <bits/stdc++.h>
using namespace std;


string ReFormatString(string S, int k) {
    int n = S.length();
    string ans = "";
    int c = 0;
    for(int i = 0; i < n; i++) {
        if(S[i] == '-') {
            continue;
        }
        if(c==k){
            ans += '-';
            c = 0;
        }
        ans += toupper(S[i]);
        c++;    
    }
    return ans;
}

string ss(string S, int K) {
    int n = S.length();
        string ans = "";
        int c = 0;
        for(int i = n-1; i >= 0; i--) {
            if(S[i] == '-') {
                continue;
            }
            if(c==K){
                ans += '-';
                c = 0;
            }
            ans += toupper(S[i]);
            c++;    
        }
        reverse(ans.begin(), ans.end());
        return ans;
}

int main() {
    string str = "2-5g-3-J";
    // cout<<ReFormatString(str, 2);
    cout<<ss(str, 2);
    return 0;
}