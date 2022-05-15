#include <iostream>
using namespace std;


//Search an element in an unsorted array.
int search(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x)
            return i+1;
    }
    return -1;
}

//insert an element in an array.
int insert(int arr[], int n, int val, int pos) {
    for(int i = n-1; i >= pos-1; i--)
        arr[i+1] = arr[i];
    arr[pos-1] = val;
    return n+1;
}

int Delete(int arr[], int n, int val) {
    int i; 
    for(i = 0; i < n; i++) {
        if(arr[i] == val) 
            break;
    }
    if(i < n) {
        for(int j = i; j < n-1; j++) {
            arr[j] = arr[j+1];
        }
    }
    return n;
}

//print the element of an array.
void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }
}

int largest(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}


int smallest(int arr[], int n) {
    int min = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

bool isSorted(int arr[], int n) {
    for(int i = 0; i < n; i++) 
        if(arr[i] > arr[i+1])
            return false;
    cout<<"Yes, it is sorted - ";
    return true;
}


int Second_largest(int arr[], int n) {
    int res = -1, largest = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[largest]) {
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest]) {
            if(res == -1 || arr[i] > arr[res])
                res = i;
        }
    }
    return arr[res];
}


int Remove_Dup(int arr[], int n) {
    int res = 1;
    for(int i = 1; i < n; i++) {
       if(arr[i] != arr[res-1]) {
           arr[res] = arr[i];
           res++;
       }
    }
    return res;
}

int moveZeroes(int a[], int m) {
    int count = 0;
    for(int i = 0; i < m; i++) {
        if(a[i] != 0) {
            swap(a[i], a[count]);
            count++;
        }
    }
    // return arr;
    return 0;
}

int main() {
    int arr[6] = {11, 22, 33, 44, 55};
    int a[8] = {12, 4, 6, 0, 4, 0, 0};
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(arr)/sizeof(arr[0]);
    // search(arr, 5, 33);
    insert(arr, n, 30, 3);
    insert(arr, n, 31, 4);
    Delete(arr, n, 30);
    Delete(arr, n, 31);
    Remove_Dup(arr, n);
    print(arr, n);
    cout<<endl<<"move zeroes"<<moveZeroes;
    cout<<endl<<isSorted(arr, n);
    cout<<endl<<"Largest element : "<<largest(arr, n);
    // cout<<endl<<"Second largest Element : "<<Second_largest;
    cout<<endl<<"Smallest element : "<<smallest(arr, n);
    cout<<endl<<search(arr, 5, 33);

}