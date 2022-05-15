#include <stdio.h>
#include <iostream>

using namespace std;

int fun(int n) {
    if(n > 100) {
        return n - 10;
    }
    return fun(fun(n + 11));
}
int main() {
    int r = fun(96);
    printf("%d\t", r);
    return 0;
}