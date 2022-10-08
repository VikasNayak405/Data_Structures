/*Given an array of n integers where each value represents the number of chocolates in a packet.
Each packet can have a variable number of chocolates. 
There are m students, the task is to distribute chocolate packets such that: 

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and packet with minimum chocolates given to the students is minimum. */

#include <bits/stdc++.h>
using namespace std;

void chocolateDist(int arr[], int n, int m) {
    sort(arr, arr + n);
    int min = INT_MAX;
    for(int i = 0; i+m-1 < n; i++) {
        int d = arr[i+m-1] - arr[i];
        if(d < min)
            min = d;
    }
    cout<<min<<endl;
}


int main() {
    int arr[] {3, 4, 1, 9, 56, 7, 9, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 5 ;
    chocolateDist(arr, n, m);
    return 0;
}