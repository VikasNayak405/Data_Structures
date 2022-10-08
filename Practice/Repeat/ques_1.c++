/* which a new customer arrives .Also , Shruthiwill give only 10 minutes to each customer.
 Your task is to calculate the time (in minutes ) the last customer needs to wait .
Input format
The input contains two integers N and X.
Output format
The output displays the waiting time of the ast customer .
Code constraints
0 < = N < = 100
0 < = x < = 30
Sample testcases
Input 1                     Output 1
4 5                          15
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin>> n >> x;
    int sum = 0;
    for(int i = 1; i < n; i++) {
        sum = sum + x;
    }
    cout<<sum<<endl;
    return 0;
}