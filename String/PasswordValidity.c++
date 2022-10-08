/*
Geek has found a new job for himself, he is now a "password
validator", he has to validate thousands of passwords ina day. A
password is a string of characters which is valid only when it contains
atleast one numerical character, atleast one lowercase english
alphabet character and atleast one uppercase english alphabet
character.

*/

#include <bits/stdc++.h>
using namespace std;

void print(string password) 
{ 
    int n = password.length();      
    bool hasLower = false, hasUpper = false, hasDigit = false; 
  
    for (int i = 0; i < n; i++) { 
        if (islower(password[i])) 
            hasLower = true; 
        if (isupper(password[i])) 
            hasUpper = true; 
        if (isdigit(password[i])) 
            hasDigit = true; 
    } 
    if(hasUpper && hasDigit && hasLower && hasDigit) 
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
}

int main() {
    int T;
    string N;
	cin>>T;
	
	while(T > 0) {
		cin>>N;
		print(N);
		T--;
	}
    return 0;
} 