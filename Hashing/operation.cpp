#include <bits/stdc++.h>
using namespace std;

class hash {
    int bucket;
    list<int> *h;
    has(int x) {
        bucket = x;
        h = new list<int>[x];
    }
    public : 
    int hasFunc(int x) {
        return (x % bucket);
    }




    int insert(int val) {
        int i = hasFunc(val);
        h[i].push_back(val)
    }

    void display() {
        for(int i = 0; i < bucket; i++) {
            cout<<i;
            for(auto x : h[i]) 
                cout<<"-->"<<x;
            cout<<endl;
        }
    }

};

int main() {
    int arr[] = {2, 5, 3, 7, 2, 6, 9, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    hash(9);
    for(int i = 0; i < n; i++) {
        h.insert(a[i]);
    }

}