//left(i) = 2i + 1
//right(i) = 2i + 2
//parent(i) = |i+1/2|

#include <bits/stdc++.h>
using namespace std;

class MinHeap {
    int *arr;
    int size;
    int cap;


    public :
    MinHeap(int n) {
        arr = new int[n];
        size = 0;
        cap = n;
    }
    
    int left(int i) {
        return 2*i + 1;
    }

    int right(int i) {
        return 2*i + 2;
    }

    int parent(int i) {
        return i-1/2;
    }

    void print() {
       vector<int>ans;
       for(int i = )
    }

    void insert(int val) {
        if(size == cap)
            return;
        size++;
        int x = size-1;
        arr[x] = val;
        while(x != 0 && arr[parent(x)] > arr[x]) {
            swap(arr[x], arr[parent(x)]);
            x = parent(x);
        }
    }

    // void print() {
    //     for(int i = 0; i < size; i++) {
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<endl;
    // }
};



int main() {
    MinHeap m(10);
    m.insert(10);
    m.insert(8);
    m.insert(7);
    m.insert(18);
    m.insert(37);
    m.insert(19);
    m.insert(8);

    m.print();
    return 0;
}