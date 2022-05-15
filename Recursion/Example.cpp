#include <stdio.h>
#include <iostream>
using namespace std;

// int func(int n) {
//     if(n > 0)
        
//         func(n - 1);
//         cout<<n<<"\t";
//     return 0;
// }
// int main() {
//     int x = 3;
//     func(x);
//     return 0;
// }

int a = 0;
int fun(int n) {
    if(n > 0) {
        a++;
        return fun(n - 1) + a;
    }
    return 0;
}
int main() {
    int x = 5;
    cout<<fun(x)<<endl;
    
    cout<<fun(x);
    return 0;
}