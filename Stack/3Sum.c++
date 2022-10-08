#include <bits/stdc++.h>
using namespace std;

void sum(int arr[], int n) {
    for(int i = 0; i < n-2;  i++) {
        for(int j = i+1; j < n-1; j++) {
            for(int k = j+1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                    cout<<arr[i] <<"," <<arr[j]<<","<<arr[k]<<endl;
                }
            }
        }
    }
    return;
}

int main() {
    int n;
    cout<<"Enter the no. of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of an array :";
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sum(arr, n);
    return 0;
}
