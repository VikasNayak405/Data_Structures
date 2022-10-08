#include <iostream>
using namespace std;

class minHeap {
    int []arr;
    int size;
    int capacity;
    public : minHeap(int x)  {
        arr = new int[x];
        size = 0;
        capacity = x;
    }
    
}

int left(int i) {
        return (2*i + 1);
    }

    int right(int i) {
        return (2*i + 2);
    }

    int parent(int i) {
        return (i - 1)/2;
    }

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = x;
}

void insert(int val) {
    if(size == capacity)
        cout<<"overflow";
        return;
    size++;
    int i = size-1;
    arr[i] = val;

    while(i != 0 && arr[parent(i)] > arr[i]) {
        swap(arr[i], arr[parent(i)]);
        i = parent(i);
    }
}


int main() {
    minHeap h(11);
    h.insert(3);
    h.insert(2);
    h.insert(1);
    h.insert(15);
    h.insert(5);
    h.insert(4);
    h.insert(45);
    
    return 0;
}