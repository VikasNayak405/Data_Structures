//Count number of occurrences (or frequency) in a sorted array

#include <bits/stdc++.h>
using namespace std;

int count_Occur(int arr[], int n, int x) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            count++;
        }
    }
    return count;

}

int main() {
    int arr[] = {1, 2, 3, 1, 1, 2, 1, 2, 1, 3, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<count_Occur(arr, n, 1);
    return 0;
}