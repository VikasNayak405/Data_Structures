#include<iostream>
#include<stdio.h>
using namespace std;

struct Array  {
    int A[10];
    int size;
    int length;
}arr;

void Display(struct Array arr) {
    cout<<"the elements are : ";
    for(int i = 0; i < arr.length; i++)
        cout<<arr.A[i]<<"\t";
}

void insert(struct Array *arr, int index, int value) {
    if(index >= 0 && index <= arr->length)
        for(int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i-1];
        arr->A[index] = value;
        arr->length++;
}

int Delete(struct Array *arr, int index) {
    int x;
    if(index >= 0 && index < arr->length)
        x = arr->A[index];
        for(int i = index; i < arr->length; i++)
            arr->A[i] = arr->A[i+1];
        arr->length--;
        return x;
    return 0;
}

void Swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSreach(struct Array *arr, int key) {
    int i;
    for(i = 0; i < arr->length; i++)
        if(key == arr->A[i])
            Swap(&arr->A[i], &arr->A[i-1]);
            return i;
    return -1;
}

int main() {
    struct Array arr = {{2,3,4,5,6},10,5};
    // insert(&arr, 3, 7);
    // cout<<Delete(&arr, 4);
    cout<<LinearSreach(&arr, 5)<<endl;
    Display(arr);
    
    return 0;
}