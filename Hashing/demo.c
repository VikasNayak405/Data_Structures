#include<stdio.h>

int fun (int x, int y)
{
 if (x == 0 && y >= 0) return y+ 1;
 else if (x > 0 && y== 0) return f(x - 1, 1) ;
 else if (x > 0 && y > 0) return (f(x - 1, f(x, y - 1)));
}
int main()
{
   int z = fun(1,3);
   printf(z);
}