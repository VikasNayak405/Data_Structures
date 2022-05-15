#include <stdio.h>
#include <iostream>

using namespace std;

struct Array {
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr) {
    cout<<"The Elements Are : ";
    for(int i = 0; i < arr.length; i++)
        cout<<arr.A[i]<<"\t"; 
}

int BinarySearch(struct Array arr, int key) {
    int low= 0;
    int high;
    int mid;
    high = arr.length - 1;

    while(low <= high) {
        mid = (low  + high)/2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            high = mid-1;
        else 
            low = mid+1;
    }
    return -1;
}

int RecurBinSrearch(int a[], int low, int high, int key) {
    int mid;
    if (low <= high) {
        mid = (low + high)/2; 
        if(key == a[mid])
            return mid;
        else if (key < a[mid])
            return RecurBinSrearch(a, low, mid-1, key);
        else
            return RecurBinSrearch(a, mid+1, high, key);
    }
    return -1;
}

int main() {
    struct Array arr = {{1,2,3,4,5,6,7,8,9,10},12,13};
    cout<<BinarySearch(arr, 7)<<endl;
    cout<<RecurBinSrearch(arr.A, 0, arr.length-1, 10)<<endl;
    Display(arr);
    return 0;
}