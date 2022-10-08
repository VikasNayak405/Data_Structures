#include <bits/stdc++.h>
using namespace std;

int Max(int arr[], int n) {
    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] >= max) 
            max = arr[i];
    }
    return max;
}

int Min(int arr[], int n) {
    int min = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] <= min)
            min = arr[i];
    }
    return min;
}

int main() {
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimum element : "<<Min(arr, n)<<endl;
    cout<<"Maximum element : "<<Max(arr, n);
    return 0;
}

