#include <stdio.h>
#include <iostream>

using namespace std;

int ReverseString1(char *A) {
    char B[12];
    int i,j;
    for(i = 0; A[i] != '\0'; i++) {}
    i = i-1;
    for(j = 0; i >= 0; i--,j++) {
        B[j] = A[i];
    }
    B[j] = '\0';
    cout<<B;
    return 0;
}

int CompareString(char *A, char *B) {
    int i, j;
    for(i = 0,j = 0; A[i] != '\0' && B[j] != '\0'; j++,i++) {
        if(A[i] != B[j])
            break;
    }
    if(A[i] == B[j])
        cout<<"Equal String";
    else if (A[i] < B[j])
        cout<<"String-A id Smaller";
    else
        cout<<"String-B id Smaller";
    return 0;
}

int IsPalindrome(char *C) {
    int i, j;
    char B[10];
    for(i = 0; C[i] != '\0'; i++) {}
    i = i-1;
    for(j = 0; i >= j; i--,j++) {
        B[j] = C[i];
    }
    B[j] = '\0';
    if(C[i] == B[j])
        cout<<"Yes! it is palindrome";
    else
        cout<<"No! it is not palindrome";

}

int main() {
    char *A = "singing";
    char *B = "singing";
    char *C = "amma";
    CompareString(A, B);
    cout<<endl;
    ReverseString1(A);
    cout<<endl;
    IsPalindrome(C);
    return 0;
}