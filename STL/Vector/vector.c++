//   vector advantages
//   1. Dynamic Size, 2. Rich libarary Function(find, erase, erase the element)
//   3. Easy to Size 4. No need to Pass Size 5. can be returned from a function
//   6. by default initailised with default values. 6. we can copy a vector to another (v1 = v2;)


#include <iostream>
#include <vector>
using namespace std;

void fun(vector<int> &v) {
    v.push_back(45);
    v.push_back(50);
    
}

int main() {
    vector<int> v{14, 15, 16, 17};
    auto i = v.insert(v.begin(), 200);
    auto j = v.insert(v.end(), 18);
    v.pop_back();
    fun(v);
    for(auto i : v) {
        cout<<i<<" ";
    }

    cout<<endl<<"first element "<<v.front()<<endl;
    cout<<"last element "<<v.back()<<endl;
    return 0;

}




/* 

push_back = 
pop_back
insert = O(n)
erase = O(n)
resize = O(n)
{ front() back() begin() rbegin() end() rend() size() } = O(1)

*/