#include <iostream>
using namespace std;
void swapx(int*, int*);

// Main function
int main()
{
    int a = 1, b = 2;

    // Pass reference
    swapx(&a, &b);

    cout<< a, b;

    return 0;
}

void swapx(int* x, int* y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;

    cout<< *x<<" " <<*y;
}