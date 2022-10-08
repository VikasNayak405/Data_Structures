/* Provided an array of integers of length, K. Consider zero as false number and all other as true number 
Write a code that changes the array in such a way that if next number is a true number and is equal as 
present number multiply the present number value by two and change the next number with zero. 
When the alteration is done, reconstruct the array such that all zendes are moved to the end and 
the arrangement of the true number or new doubled number is maintained as in the initial array

Input format

The first line of input contains an inter K denoting the size of the array The next line contains K space separated integers denoting the elements of the array

Output format

Display space separated elements of the new modified array on a new line

Code constraints
 . 1 <= K <= 10^5

 sample testcases
 input 1                            output 1
 5                                  4 8 0 0 0
 2 2 0 4 4

 input 2                            output 2
 5                                  1 4 0 0 0
 0 1 2 2 0

*/


#include <bits/stdc++.h>
using namespace std;

void sol(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            i++;
        }
        else if(arr[i] != 0) {
            int j = i+1;
            arr[i] = arr[i]*2;
            arr[j] = 0;
        }
    }
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[j], arr[i]);
            j++;
        }
    }

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

}

int main() {
    int n;
    cin>> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sol(arr, n);
    return 0;
}