#include <stdio.h>
#include <iostream>
using namespace std;

int fib(int n) {
    int t0 = 0, t1 = 1, s = 0, i;
    if(n <= 1){
        return n;
    }
    for(i = 2; i <= n; i++) {
        s = t0 + t1;
        cout<<s<<"\t";
        t0 = t1;
        t1 = s;
    }
    cout<<endl;
    return s;
}

int RecursiveFib(int n) {
    if(n <= 1) 
        return n;
    return RecursiveFib(n-2) + RecursiveFib(n-1);
}

int main() {
    cout<<RecursiveFib(5);
    return 0;
}