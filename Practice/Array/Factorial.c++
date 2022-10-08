#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if(n == 0)
        return 1;
    return n*factorial(n-1);
}

int fibonacci(int n) {  //find nth fibonacci number
    if(n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

void print_ascending(int n) {
    if(n == 1) {
        cout<<1<<" ";
        return;
    }
    print_ascending(n-1);
    cout<<n<<" ";
}

void print_desending(int n) {
    if(n == 1) {
        cout<<1<<" ";
        return;
    }
    cout<<n<<" ";
    print_desending(n-1);
    
}

int main() {
    int n;
    cin>>n;
    // cout<<factorial(n);
    // cout<<fibonacci(n);
    print_ascending(n);
    cout<<endl;
    print_desending(n);
    return 0;
}