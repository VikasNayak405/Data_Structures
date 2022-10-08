#include <bits/stdc++.h>
using namespace std;

bool check(string s1, string s2, int m, int n) {
    int i = 0;
    int j = 0;
    while(i < m && j < m) {
        if(s1[i] == s2[j])
            i++;
        j++;
    }
    return i == m;
}

int main() {
    string s1;
    string s2;
    cin>> s1 >> s2;
    int m = s1.length();
    int n = s2.length();

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(check(s1, s2, m, n))
        cout<<"True";
    else 
        cout<<"False";
    return 0;
}