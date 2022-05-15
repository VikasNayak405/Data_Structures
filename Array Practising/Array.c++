#include<iostream>
#include<stdio.h>

using namespace std;

struct Array {
    int *A;
    int size;
    int length;
};

void display (struct Array arr) {
    cout<<"Elements Are : ";
    for(int i = 0;i < arr.length;i++)
        cout<<arr.A[i]<<"\t";
}

int main() {
    struct Array arr;
    cout<<"Enter the size of the array :";
    cin>>arr.size;
    arr.A = (int *)malloc(arr.size*sizeof(int));
    
    int n;
    cout<<"Enter the number of the element :";
    cin>>n;
    
    
    cout<<"enter the elements :";
    for(int i = 0; i < n;i++) 
        cin>>arr.A[i];
    arr.length = n;

    display(arr);
    return 0;
}