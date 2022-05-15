#include <stdio.h>
#include <iostream>
using namespace std;

int Exponent1(int m, int n) {
    if(n == 0) {
        return 1;
    }
    else return Exponent1(m, n-1) * m;
}

int Exponent2(int m, int n) {
    if(n == 0) {
        return 1;
    }
    else if(n % 2 == 0)
        return Exponent2(m*m, n/2);
    else return m * Exponent2(m*m, (n-1)/2);
}

int main() {
    int x = Exponent2(2, 9);
    cout<<x;
    return 0;
}