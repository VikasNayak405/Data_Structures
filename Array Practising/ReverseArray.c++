#include<iostream>
#include <stdio.h>

using namespace std;

struct Array {
    int A[15];
    int length;
};

void Display(struct Array arr) {
    cout<<"the elements are :";
    for(int i = 0; i < arr.length; i++)
        cout<<arr.A[i]<<"\t";
}

void Swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Reverse(struct Array *arr) {
    int i,j;
    for(i = 0, j = arr->length-1; i < j; i++, j--)
        Swap(&arr->A[i], &arr->A[j]);
}
 
int main() {
    struct Array arr = {{1,2,3,4,5,6,7,8,9,12},10};
    Reverse(&arr);
    Display(arr);
    return 0;
}