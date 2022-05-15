#include<iostream>

using namespace std;

bool isPrime (int n)
{ 
    if(n <= 1)
       return false;
    for(int i = 2; i < n; i++)
        if(n % i == 0)
           return true;
    return false;
}

int main()
{
    cout<<isPrime(10);

    return 0;
}