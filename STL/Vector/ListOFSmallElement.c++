#include <iostream>
#include <vector>
using namespace std;

vector<int> getSmaller(int arr[], int n, int k) {
    vector<int> res;
    for(int i = 0; i < n; i++) {
        if(arr[i] < k) {
            res.push_back(arr[i]);
        }
    }
    return res;
}
void print(vector<int>ans) {
    for(int i : ans) {
        cout<<i<<" ";
    }
}

int main() {
    int arr[] = {10,4, 6, 19, 38, 24, 21};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> res = getSmaller(arr, n, 10);
    print(res);
    return 0;
}