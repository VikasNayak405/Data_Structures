#include <stdio.h>
#include <iostream>

using namespace std;

int Sum(int n) {
    return n*(n+1)/2;
} 

int SumOfN(int n) {
    if(n == 0) {
        return 0;
    } 
    else 
        return SumOfN(n - 1) + n;
}

int main() {
    cout<<SumOfN(5); 
    return 0;
}