//Sort one array according to other

#include <bits/stdc++.h>
using namespace std;

void sortChar(int arr1[], char arr2[], int n) {
    pair<int, char> p[n];
    for(int i = 0; i < n; i++) {
        p[i] = {arr1[i], arr2[i]};
    }
    sort(p, p+n);
    for(int i = 0; i < n; i++) {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
}

int main() {


    return 0;
}