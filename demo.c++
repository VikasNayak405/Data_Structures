#include<stdio.h>
#include<conio.h>

int main()
{

  int a[2][2], b[2][2], c[2][2], i, j, k, P, Q, R, S, T, U, V;
  printf("\n elements of matrix A: \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++) 
    {
      scanf("%d", &a[i][j]);
    }
  }

  printf("\n elements of matrix B: \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++) 
    {
      scanf("%d", &b[i][j]);
    }
  }
   
  printf("\n product matrix using strassen: \n");
  
  P= (a[1][1] + a[2][2]) * (b[1][1] + b[2][2]);
  Q= (a[2][1] + a[2][2])*b[1][1];
  R= (b[1][2]-b[2][2])*a[1][1];
  S= (b[2][1]-b[1][1])*a[2][2];
  T= (a[1][1]+a[1][2])*b[2][2];
  U= (a[2][1]-a[1][1])*(b[1][1]+b[1][2]);
  V= (b[2][1]+b[2][2])*(a[1][2]-a[2][2]);

  c[1][1]=P+S-T+V;
  c[1][2]=R+T;
  c[2][1]=Q+S;
  c[2][2]=P+R-Q+U;

  for(i=0;i<2;i++)
  {
     printf("\n");
     for(j=0;j<2;j++)
      printf("%d\t", c[i][j]);
      
  }
 return 0;
}
 