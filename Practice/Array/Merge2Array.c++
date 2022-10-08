#include <iostream>

using namespace std;

void mergeArray(int a1[], int a2[], int n, int m, int a3[]) {
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(a1[i] < a2[j])
            a3[k++] = a1[i++];
        else 
            a3[k++] = a2[j++];
    }
    while(i < n) {
        a3[k++] = a1[i++];
    }
    while(j < m) {
        a3[k++] = a2[j++];
    }
}

void print(int a3[], int k) {
    for(int i = 0; i < k; i++) {
        cout<<a3[i]<<" ";
    }
}

int main() {
    int a1[] = {1,3,5,7,9};
    int n = sizeof(a1)/sizeof(a1[0]);
    int a2[] = {2,4,6,8};
    int m = sizeof(a2)/sizeof(a2[0]);
    int k = n+m;
    int a3[k];
    mergeArray(a1, a2, n, m, a3);
    print(a3, k);
    return 0;
}