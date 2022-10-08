#include <bits/stdc++.h>
using namespace std;

int removeOcurrence(char* s, char c) {
    int i = 0, j = 0;
    for(;i<strlen(s);i++) 
        if(s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
    return s[j];

}

int main() {
    char s[] = "geeksforgeeks";
    removeOcurrence(s, 'g');
    cout<<s;
    return 0;
}