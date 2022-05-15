#include <iostream> 

using namespace std;

template <class C>
class Array {
private : C *A;
int length;
int size;

public : Array() {
 size=10;
 A=new C[10];
 length=0;
 }
 Array(int sz)
 {
 size=sz;
 length=0;
 A=new C[size];
 }

~Array() {
    delete []A;
}


void Display();
void Insert(int index, C value);
C Delete(int index);
};

template <class C >
void Array <C> :: Display() {
    cout<<"Elements Are : ";
    for(int i = 0; i < length; i++)
        cout<<A[i]<<"\t";
}

template <class C>
void Array <C> :: Insert(int index, C value) {
    if(index >= 0 && index <= length) {
        for(int i = length-1; i >= index; i--)
            A[i+1] = A[i];
        A[index] = value;
        length++;
    }
}

template <class C>
C Array <C> :: Delete(int index) {
    int x;
    if(index >= 0; index <= length) {
        x = A[index];
        for(int i = index; i < length; i++)
            A[i] = A[i+1];
        length--;
    }
    return x;
}

int main() {
    Array <int> arr(10);

    arr.Insert(0, 11);
    arr.Insert(1, 22);
    arr.Insert(2, 33);
    arr.Display();
    cout<<"\n";
    cout<<"The Delete Element is : "<<arr.Delete(1)<<endl;
    arr.Display();
    return 0;
}