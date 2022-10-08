#include<bits/stdc++.h>
using namespace std;

class solution {
    public : 
    bool subarrayWith0Sum(int arr[], int n) {
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = i; j < n; j++) {
                sum = sum + arr[j];
                if(sum == 0)
                    return true;
            }
        }
        return false;
    }
};

int main() {
   int arr[] = {1, 4, 13, -3, -10, 5};
   int n = sizeof(arr)/sizeof(arr[0]);
   solution sol;
   if(sol.subarrayWith0Sum(arr, n))
     cout<<"yes"<<endl;
   else cout<<"No"<<endl;
   return 0;
}