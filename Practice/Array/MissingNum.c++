// find the missing number 
// input : arr[] = {1,2,4,6,3,7,8}
// output : 5;

#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    int total = (n+1)*(n+2)/2;
    for(int i = 0; i < n; i++) {
        total -= arr[i];
    }
    return total;
}

int main() {
    int arr[] = {1,2,4,6,3,5,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findMissing(arr, n);
    return 0;
}