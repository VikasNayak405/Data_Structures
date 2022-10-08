#include <bits/stdc++.h>
using namespace std;

int Kadane(int arr[], int n) {
    int final = INT_MIN;
    int semi = 0;
    for(int i = 0; i < n; i++) {
        semi = semi + arr[i];
        if(final < semi)
            final = semi;
        else if(semi < 0)
            semi = 0;
    }
    return final;
}

int main() {

    int n;
    cin>> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<Kadane(arr, n);

    return 0;
}