#include <stdio.h>
#include <iostream>
using namespace std;

double E(int x, int n) {
    static double r;
    if(n == 0)
        return r;
    r = 1 + r/n * r;
    return E(x, n - 1);
}

int main() {
    cout<<E(2, 10);
    return 0;
}