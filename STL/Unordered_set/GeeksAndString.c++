#include<bits/stdc++.h>
using namespace std;

class solution {
    public :
    vector<int> prefixCount(string li[], string query[], int N, int Q) {
        unordered_map<string, int>mp;
        for(int i = 0; i < N; i++) {
            string temp = "";
            for(int j = 0; j < li[i].size(); j++) {
                char ch = li[i][j];
                temp += ch;
                mp[temp] += 1;
            }
        }
        vector<int>ans(Q, 0);
        for(int i = 0; i < Q; i++) {
            int tempans = mp[query[i]];
            ans[i] = tempans;
        }
        return ans;
    }
};

int main() {
   string li[] = {"abracadabra", "geeksforgeeks", "abracadabra", "geeks", "geeksthrill"};
   string query[] = {"abr", "geeks", "geeksforgeeks",  "ge", "gar"};
   int N = li->size();
   int Q = query->size();
   solution sol;
   vector<int>res = sol.prefixCount(li, query, N, Q);
   for(int i = 0; i < res.size(); i++) {
    cout<<res[i]<<" ";
   }
   cout<<endl;
   return 0;
}