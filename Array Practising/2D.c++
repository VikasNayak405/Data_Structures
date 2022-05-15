#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,0,1,2}};
    int *B[3];
    int **C;

    B[0] = (int *)malloc(3*sizeof(int));
    B[1] = (int *)malloc(3*sizeof(int));
    B[2] = (int *)malloc(3*sizeof(int));

    C = (int **)malloc(3*sizeof(int *));
    C[0] = (int *)malloc(4*sizeof(int));
    C[1] = (int *)malloc(4*sizeof(int));
    C[2] = (int *)malloc(4*sizeof(int));
    for(int i = 0;i < 3;i++) {
        for(int j = 0;j < 4;j++)
            printf("%d \t",C[i][j]);
        printf("\n");
    }
    return 0;

}