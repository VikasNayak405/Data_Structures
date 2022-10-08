#include <bits/stdc++.h>
using namespace std;

class vikas {
    private : 
    int age = 22;
    string surname = "Nayak";
    float height = 5.7;
    string status = "single";

    public : 
    void fun() {
        cout<<age<<endl;
    }
    
};

class Nayak : public vikas {
    int age = 23;
    public : int fun2() {
        return age;
    }
};

int main() {
    vikas v1;
    Nayak v2;
    v1.fun();
    cout<<endl;
    // cout<<v2.fun()<<endl;
    v2.fun();
    cout<<v2.fun2();
    return 0;
}
