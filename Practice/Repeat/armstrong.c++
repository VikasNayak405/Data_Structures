#include <bits/stdc++.h>
using namespace std;

void isArmstrong(int n) {
    int temp = n;
    int p = 0;
    while(n > 0) {
        int rem = n % 10;
        p = p + (rem*rem*rem);
        n = n / 10;
    }

    if(temp == p)
        cout<<"yes, it is armstcorpsesrong no. ";
    else 
        cout<<"No, it is not armstrong no. ";
}

int fibo(int n) {
    if(n <= 1)
        return n;
    return fibo(n-1) + fibo(n-2);
}

int factorial(int n) {
    int res = 1;
    int i;
    for(i = 2; i <= n; i++) {
        res = res*i;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    // isArmstrong(n);
    cout<<factorial(n);
    return 0;
}