#include<bits/stdc++.h>
using namespace std;
 
class solution {
    public :
    void makePalindrome(int n, vector<string> arr) {
        string str = "";
        for(int i = 0; i < n; i++) {
            str = str + arr[i];
        }
        cout<<str<<endl;
    }
};


int main() {
//    int n;
//    cin>>n;
//    vector<string> arr(n);
//    for(int i = 0; i < n; i++) {
//     cin>>arr[i];
//    }

    vector<string>  arr = {"djfh", "gadt", "hfjd", "tdag"};
    int n = arr.size();
   solution sol;
//    if(sol.makePalindrome(n, arr)) cout<<"Yes"<<endl;
//    else cout<<"No"<<endl;
   sol.makePalindrome(n, arr);
   return 0;
}