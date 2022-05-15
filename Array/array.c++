#include <iostream>
using namespace std;

int search(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) 
        if(arr[i] == x) 
            return i;
        return -1;
}

int insert(int arr[], int n, int capacity, int val, int pos) {
    if(capacity == n) {
        return n;
    }
    int position = pos-1;
    for(int i = n-1; i >= position; i--) {
        arr[i+1] = arr[i];
    }
    arr[position] = val;
    return n+1;
}


int Delete(int arr[], int n, int val){
    int i;
    for(i = 0; i < n; i++) {
        if(arr[i] == val)
            break;
    }
    if(i < n)
        for(int j = i; j < n-1; j++) {
            arr[j] = arr[j+1];
        }
    return n-1;
    
}


void getLargest(int arr[], int n) {
    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(max < arr[i])
            max = arr[i];
    }
    //return max;
    cout<<endl;
    cout<<"the largest element in an array is : "<<max<<endl;
}

void SecondLargest(int arr[], int n) {
    int res = -1;
    int largest = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[largest]) {
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest]) {
            if(res == -1 || arr[i] > arr[res]) {
                res = i;
            }
        }
    }
    cout<<"Second Largest Element in an Array is : "<<arr[res]<<endl;
}


int RemoveDup(int arr[], int n) {
    int res = 1;
    int temp[n];
    temp[0] = arr[0];
    for(int i = 0; i < n; i++) {
        if(temp[res-1] != arr[i]) {
            temp[res] = arr[i];
            res++;
        }
    }
    for(int i = 0; i < res; i++)
        arr[i] = temp[i];
    return res;
}


int RemoveDup2(int arr[], int n) {
    if(n==1 || n== 0)
        return n;
    int j = 0;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] != arr[i+1])
            arr[j++] = arr[i];
    }
    arr[j++] = arr[n-1];
    return j;
}


void Reverse(int arr[], int n) {
    int i, j;
    for(i = 0, j = n-1; i < j; i++,j--) {
        swap(arr[i], arr[j]);
    }

}


void LeftRotateByOne(int arr[], int n) {
    int temp = arr[0];
    for(int i = 0; i < n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}


void Display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i] <<" ";
    }
}


int main() {
    int arr[] = {10, 40, 40, 40, 40, 60, 70, 80, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = search(arr, n, 50);

    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    cout<<endl;
    insert(arr, n, 12, 99, 9);
    Delete(arr, n, 20);
    //RemoveDup2(arr, n);
    //Reverse(arr, n);
    LeftRotateByOne(arr, n);
    Display(arr, n);
    getLargest(arr, n);
    SecondLargest(arr, n);
    return 0;
    
}