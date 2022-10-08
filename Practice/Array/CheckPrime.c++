// Program to find the Nth Prime Number

#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;

int isprime(int n) {
    if(n == 2)
        return 1;
    for(int i = 2; i <= n/2; i++) {
        if(n%i == 0)
        return 0;
    }
    return 1;
}


int main() {
    int n;
    cin>>n;
    int c = 0, num = 2;
    while( c!= n) {
        if(isprime(num)) {
            c++;
        }
        if(c != n) {
            num++;
        }
    }
    cout<<num;
    return 0;
}