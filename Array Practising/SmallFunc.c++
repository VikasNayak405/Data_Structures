#include <iostream>
#include <stdio.h>

using namespace std;

struct Array {     
    int *A;
    int size;
    int length;
};

void Display(struct Array arr) {
    cout<<"Elements Are : ";
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

int Get (struct Array arr, int index) {
    if (index > 0 && index < arr.length)
        return arr.A[index];
    return -1;
}

int Set (struct Array *arr, int index, int value) {
    if (index > 0 && index <= arr->length) 
        arr->A[index] = value;
    return 0;
}

int Max (struct Array arr) {
    int max = arr.A[0];
    int i;
    for(i = 0; i <= arr.length; i++) 
        if (max < arr.A[i])
            max = arr.A[i];
    return max;
}

int Min (struct Array arr) {
    int min = arr.A[0];
    int i;
    for(i = 1; i > arr.length; i++)
        if(min < arr.A[i])
            min = arr.A[i];
    return min;
}

int Sum (struct Array arr) {
    int s = 0;
    int i;
    for(i = 0; i < arr.length; i++)
        s+=arr.A[i];
    return s;
}

float Avg(struct Array arr) {
    
    return (float)Sum(arr)/arr.length;
}

int main() {
    int ch;
    int value , index;
    struct Array arr1;
    cout<<"Enter the size of the Array : ";
    cin>>arr1.size;
    arr1.A = (int *)malloc(arr1.size*sizeof(int));

    do {
    cout<<"Press 1 for Insert"<<"\t"<<"Press 2 for delete"<<"\t"<<"Press 3 for Find Max"<<"\t"<<"Press 4 for Find Min"<<"\t";
    cout<<"Press 5 for Sum"<<"\t"<<"Press 6 for Average"<<"\t"<<"press 7 for display"<<endl;

    cout<<"Press Any key !! ";
    cin>>ch;

    switch (ch)
    {
    case 1 : cout<<"Enter the element and index";
            cin>>value>>index;
            insert(&arr1, index, value);
                break;
    
    case 2 : cout<<"Enter the index to delete : ";
             cin>>index;
             Delete(&arr1,index);
             printf("deleted elements is %d\n", value);
             break;

    case 3 : cout<<Max(arr1)<<endl;
             break;

    case 4 : cout<<Min(arr1)<<endl;
             break;

    case 5 : cout<<Sum(arr1)<<endl;
                break;
    case 6 : cout<<Avg(arr1)<<endl;
                break;
    case 7 : Display(arr1);
                break;


    default: cout<<"invalid input !! error";
                break;
    }
    }while(ch < 8);
    
    return 0;
}