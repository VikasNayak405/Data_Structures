//Count Distinct Element in Every Window....


#include<bits/stdc++.h>
using namespace std;

class solution {
    public : 
    void countDistinctInteger(int arr[], int n, int k) {
        unordered_map<int, int> freq;
        for(int i = 0; i < k; i++) {
            freq[arr[i]]++;
        }
        cout<<freq.size()<<" ";
        for(int i = k; i < n; i++) {
            freq[arr[i-k]]--;
            if(freq[arr[i-k]] == 0)
                freq.erase(arr[i-k]);
            freq[arr[i]]++;
            cout<<freq.size()<<" ";
        }
    }
    int countDistinctString(string S, int k) {
        unordered_map<char, int> freq;
        vector<int>v;
        int n = S.length();
        for(int i = 0; i < k; i++) {
            freq[S[i]]++;
        }
        v.push_back(freq.size());
        for(int i = k; i < n; i++) {
            freq[S[i-k]]--;
            if(freq[S[i-k]] == 0)
                freq.erase(S[i-k]);
            freq[S[i]]++;
            v.push_back(freq.size());
        }
        auto count = 0;
        for(auto x = freq.begin(); x != freq.end(); x++) {
            
            int f = k-1;
            if(f == freq.second){
                count++;
            }
        }
        return count;
        
    }
};

int main() {
   int arr[] = {10, 10, 5, 3, 20, 5};
   int n = sizeof(arr)/sizeof(arr[0]);
   string S = "aabab";
   int k = 3;
   solution sol;
   sol.countDistinctInteger(arr, n, k);
   cout<<endl;
   cout<<sol.countDistinctString(S, k);
   return 0;
}