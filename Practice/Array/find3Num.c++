// Find a triplet that sum to a given value

#include <bits/stdc++.h>
using namespace std;

void find3Num(int arr[], int n, int sum) {
    sort(arr, arr+n);
    for(int i = 0; i < n-2; i++) {
        int left = i+1;
        int right = n-1;
        while(left < right) {
            if(arr[i] + arr[left] + arr[right] == sum) {
                cout<<arr[i]<<" + "<< arr[left]<<" + "<<arr[right]<<endl;
                break;
            }
            else if(arr[i] + arr[left] + arr[right] < sum) {
                left++;
            }
            else {
                right--;
            }
        }
    }
}


int main() {
     int arr[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int n = sizeof(arr) / sizeof(arr[0]);
    find3Num(arr,n, sum);
    return 0;
}
