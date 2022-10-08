#include <bits/stdc++.h>
using namespace std;

string reverseSentence(string s1) {

    stack<string> st;
    string res;
    int n = s1.length();
    for(int i = 0; i < n; i++) {
        string word = "";
        while(s1[i] != ' ' && i < n) {
            word += s1[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()) {
        res += st.top();
        st.pop();
        if(!st.empty())
            res += " ";
    }
    // cout<<endl;

    return res;
}

int main() {
    string s1;
    cin>>s1;
    cout<<reverseSentence(s1);

    return 0;

}