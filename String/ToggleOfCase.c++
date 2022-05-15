#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    char S[12] = "vikas nayak";
    int i = 0;
    for(i = 0; S[i] != '\0'; i++) {
        if(S[i] >= 65 && S[i] <= 90) { 
            S[i] += 32;
        }
        else if(S[i] >= 'a' && S[i] <= 122) {
            S[i] = S[i] - 32;
        }
    }
    cout<<S;
    return 0;
}