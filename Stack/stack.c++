#include<iostream>
// #include<vector>
using namespace std;
#define n  100

class Mystack {
    int *arr;
    
    int top;
   public : Mystack() {
        // cap = x;
        arr = new int[n];
        top = -1;
    }

    void push(int x) {
        if(top == n-1) {
            cout<<"Stack Overflow"<<endl;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if(top == -1) {
            cout<<"stack underflow";
            return;
        }
        top--;
    }

    int Top() {
        if(top == -1) {
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        return arr[top];
    }

    bool empty() {
        if(top == -1) 
            return true;
        else
            return false; 
    }

    void print() {

    }
};

int main() {
    Mystack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout<<st.Top()<<endl;
    // st.pop();
    // cout<<st.Top()<<endl;
    // cout<<st.empty();
    while(st.empty() == false) {
        cout<<st.Top()<<"\t";
        st.pop();
    }
    return 0;
}

