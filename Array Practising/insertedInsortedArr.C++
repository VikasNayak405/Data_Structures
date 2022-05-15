#include <stdio.h>
#include <iostream>

using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
    
};

int IsSorted (struct Array arr) {
    int i;
    for(i = 0; i < arr.length-1; i++)
        if(arr.A[i] > arr.A[i+1])
            return false;
        return true;
}

void Swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int Rearrange(struct Array *arr) {
    int i = 0;
    int j = arr->length-1;
    while(i < j) {
        while(arr->A[i] < 0)
            i++;
        while(arr->A[j] >= 0)
            j--;
        if(i < j)
            Swap(&arr->A[i], &arr->A[j]);   
    }
   return 0; 
}

void Display(struct Array arr) {
    cout<<"Elements Are : ";
    for(int i = 0; i < arr.length; i++)
        cout<<arr.A[i]<<"\t";
}



int main() {
    struct Array arr = {{2,-3,25,10,-15,-7},10,6};
    Rearrange(&arr);
    Display(arr);
    return 0;
}