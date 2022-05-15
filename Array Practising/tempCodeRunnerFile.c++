#include<iostream>
#include<stdio.h>
 
using namespace std;
template <class t>
class arthimetic {
    private : t a,b;
    public : arthimetic(t a, t b);
    t add();
    t sub();
};
template <class t>
arthimetic<t>::arthimetic(t a, t b) {
    this->a = a;
    this->b = b;
} 

template <class t>
t arthimetic<t>::add() {
    t  x;
    x = a + b;
    return x;
}

template <class t>
t arthimetic<t>::sub() {
    t  x;
    x = a - b;
    return x;
}

int main() {
    arthimetic<int> ar(10,5);
    cout<<ar.add()<<endl;
    arthimetic<int> ar1(10,2);
    cout<<ar1.sub()<<endl;
    arthimetic<float> ar2(10.8,5.2);
    cout<<ar2.add();

}