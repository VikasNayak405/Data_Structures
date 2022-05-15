#include <iostream>
using namespace std;

class Array {
    private :
    int *A;
    int size;
    int length;

    public : 
    Array() {
        size = 10;
        length = 0;
        A = new int[size];
    }

    Array(int sz) {
        size = 10;
        length = 0;
        A = new int[size];
    }
    void Display();
    void Insert(int index, int value);
    int Delete(int index);
    int Max ();
    int Min ();
    int Sum ();
    float Avg();
    int IsSorted ();
    void Swap(int *x, int *y);
    int Rearrange();
    int LinearSearch( int key);
    int BinarySearch(int key);
    void Reverse();
};

void Array :: Display() {
    cout<<"Elements Are : ";
    for(int i = 0; i < length; i++)
        cout<<A[i]<<"\t";
}

void Array :: Insert(int index, int value) {
    if(index >= 0 && index <= length) {
        for(int i = length; i < index; i--)
            A[i] = A[i-1];
        A[index] = value;
        length++;
    }
}

int Array :: Delete(int index) {
    if(index >= 0 && index <= length) {
        for(int i = index; i < length; i++)
            A[i] = A[i+1];
        length--;
        return A[index];
    }
    
}

int Array :: Max() {
    int max = A[0];
    int i;
    for(i = 0; i <= length; i++) {
        if(max < A[i]) 
            max = A[i];
    } 
    return max;  
}

int Array :: Min() {
    int min = A[0];
    int i;
    for(i = 0; i <= length; i++) {
        if(min > A[i])
            min = A[i];
    }
    return min;
}

int Array :: Sum() {
    int S = 0;
    int i;
    for(i = 0; i <= length; i++) {
        S = S + A[i];
    }
    return S;
}

float Array :: Avg() {
    float x = Sum()/length;
    return x;
}

int Array :: IsSorted() {
    for(int i = 0; i < length; i++) {
        if(A[i] < A[i+1])
            return true;
        return false;
    }
    
}

void Array :: Swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int Array :: LinearSearch(int key) {
    int i;
    for(i = 0; i < length; i++) {
        if(key == A[i])
            Swap(&A[i],&A[i-1]);
            return i;
    }
    return -1;
}

int Array :: BinarySearch(int key) {
    int high = length-1;
    int low = 0;
    int mid;
    while(low < high) {
        if(key == mid)
            return mid;
        else if(key < mid)
            high = mid-1;
        else if(key > mid)
            low = mid+1;
    }
    return -1;
}

int Array :: Rearrange() {
    int i = 0;
    int j = length-1;
    while(i < j) {
        while(A[i] < 0)
            i++;
        while(A[j] >= 0)
            j--;
        if(i < j) {
            Swap(&A[i], &A[j]);   
        }
    }
   return 0; 
}

void Array :: Reverse() {
    int i,j;
    for(i=0, j= length-1; i < j; i++, j--) {
        Swap(&A[i],&A[j]);
    }
}

int main() {
    Array *arr1;
    int ch,sz;
    int value, index;
    cout<<"Enter the size of the Array : ";
    cin>>sz;
   
    arr1 = new Array(sz);

    do {
        cout<<"Press 1 for Insert"<<"\t"<<"Press 2 for delete"<<"\t"<<"Press 3 for Find Max"<<"\t"<<"Press 4 for Find Min"<<"\t";
        cout<<"Press 5 for Sum"<<"\t"<<"Press 6 for Average"<<"\t"<<"press 7 for "<<endl;

        cout<<"Press Any key !! ";
        cin>>ch;

        switch (ch)
        {
            case 1: cout<<"Enter the element and index";
                    cin>>value>>index;
                    arr1->Insert(index, value);
                        break;
            
            case 2 : cout<<"Enter the index to delete : ";
                    cin>>index;
                    value = arr1->Delete(index);
                    printf("deleted elements is %d\n", value);
                    break;

            case 3 : cout<<arr1->Max()<<endl;
                    break;

            case 4 : cout<<arr1->Min()<<endl;
                    break;

            case 5 : cout<<arr1->Sum()<<endl;
                        break;
            case 6 : cout<<arr1->Avg()<<endl;
                        break;
            case 7 : arr1->Display();
                        break;


            default: cout<<"invalid input !! error";
                        break;
        }
    }while(ch < 8);
    
    return 0;

}

