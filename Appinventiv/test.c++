#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, n, count = 0;
    cout<<"Enter number : ";
    cin>>n;
    for(int i = 0; i <= n; i++) {

        count = count + i;
        a = count;
        for(int j = 1; j <= i; j++) {
            cout<<a;
            a--;
        }
        cout<<endl;

    }
    return 0;
}
