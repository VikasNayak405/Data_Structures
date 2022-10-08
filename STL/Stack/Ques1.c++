/* given a string of paranthesis ({,},(,)[and]), we need to
check if this string is balanced or not.
input         output
([])           yes

input2        output2
((())           No 
*/
#include <bits/stdc++.h>
using namespace std;

bool matching(char a, char b) {
    return (
        (a == '(' && b == ')') ||
        (a == '{' && b == '}') ||
        (a == '[' && b == ']')
    );
}

bool isBalanced(string str) {
    stack<int>s;
    int n = str.length();
    for(int i = 0;i < n; i++) {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{') {
            s.push(str[i]);
        }
        else {
            if(s.empty() == true)
                return false;
            else if(matching(s.top(), str[i]) == false) {
                return false;
            }
            else 
            s.pop();
        }
    
    }
    return (s.empty() == true);
}


int main() {
    string str;
    cin>>str;
    cout<<isBalanced(str);
    return 0;
}
