#include<bits/stdc++.h>
using namespace std;

int main() {
   unordered_map<string, int> m;
   m["gfg"] = 20;
   m["idk"] = 30;
   m.insert({"fuck", 40});
   for(auto x : m) {
    cout<<x.first<<" "<<x.second<<endl;
   }

   //using find function
   auto it = m.find("fuck");
   if(it != m.end()) {
    cout<<it->second<<endl;
   }
   else cout<<"Not Found"<<endl;

   //using count function, count func is generally tells us that the element 
   //you searching about is present or not, if present i return 1, otherwise 0
   if(m.count("ide") > 0) {
    cout<<"Found"<<endl;
   }
   else cout<<"Found"<<endl;

   //using size function, it generally tell us the size of the unorderedmap.
   cout<<m.size()<<endl;

   //using erase fucntion, it used to delete the particular element and even all element of unorderedmap also.
    m.erase(m.begin(), m.end());
    cout<<m.size()<<endl;

   return 0;
}