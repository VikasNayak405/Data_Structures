#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<int> v = {12,32,14,5,6,7};
    sort(v.begin(), v.end());
    for(int x : v){cout<<x<<" ";}
    cout<<endl;
    sort(v.begin(), v.end(), greater<int>());
    for(int x : v){cout<<x<<" ";}
}




