#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Hash{
    int BUCKET;
    list<int> *table;
    Hash(int x) {
        BUCKET = x;
        table = new list<int>[x];
    }

    void insert(int key) {
        int i = key % BUCKET;
        table[i].push_back(key);
    }

    void remove(int key) {
        int i = key % BUCKET;
        table[i].remove(key);
    }

    void Display() {
        for(int i = 0; i < BUCKET; i++) {
            cout<<i;
            for(auto x : table[i])
                cout<<" --> "<<x;
                cout<<endl;
        }
    }

    void Search(int key){
        int i = key % BUCKET;
        for(auto x : table[i])
            if(x == key){
                cout<<"found"<<endl;
            }
        cout<<"Not found"<<endl;
    }
};

int main() {
    int a[] = {10, 20, 30, 40, 50, 43, 31, 87, 92, 56, 83, 27};
    int n = sizeof(a)/sizeof(a[0]);
    Hash h(7);
    for(int i = 0; i < n; i++) {
        h.insert(a[i]);
    }
    h.remove(43);
    h.Search(87);
    h.Display();
    
    return 0;
}