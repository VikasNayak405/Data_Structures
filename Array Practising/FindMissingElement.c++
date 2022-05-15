#include <iostream>


using namespace std;

struct Array {
    int A[15];
    int length;
    int size;
};


int FindMissingElement(struct Array arr) {
    int i;
    int low = 1;
    int high = arr.length - 1;
    int diff = arr.A[i++] - 0;
    
    for(i = 0; i < arr.length; i++) {
        if((arr.A[i]-i) != diff) {
            while(diff < (arr.A[i]-i)) {
                cout<<"missing Element : "<<i+diff<<endl;
                diff++;
            }
        }
    }
    return 0;
}

int FastestFIndMissingElement(struct Array arr) {
    int i;
    int low = 1;
    int x= arr.A[i];
    int H[x];
    int high = arr.length - 1;
    for(i = 0; i < arr.length; i++) {
        H[arr.A[i]++]++;
    }
    for(i = low; i <= high; i++) {
        if(H[i] == 0)
            cout<<i;
    }
    return 0;
}

int FindDuplicate (struct Array arr) {
    int lastDuplicate = 0;
    for(int i = 0; i < arr.length; i++) {
        if(arr.A[i] == arr.A[i+1] && arr.A[i] != lastDuplicate) {
            cout<<arr.A[i]<<"\t";
            lastDuplicate = arr.A[i];
        }
    }
    return 0;
}

int CountDoubleElement (struct Array arr) {
    int i,j;
    for(int i = 0; i < arr.length - 1; i++) {
        if(arr.A[i] == arr.A[i+1]) {
            j = i+1;
            while(arr.A[j] == arr.A[i]) 
                j++;
            cout<<arr.A[i]<<" Appearing : "<<j-i<<endl;
            i = j-1;
        }
    }
    return 0;
}


int main() {
    struct Array arr = {{1,2,2,3,4,4,4,5,6,6,6,6,8,9,9},10,10};
    // FindMissingElement(arr);
    // FastestFIndMissingElement(arr);
    FindDuplicate(arr);
    cout<<endl;
    CountDoubleElement(arr);
    return 0;
}