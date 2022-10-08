/* Sai gave you two strings $1 and S2 of uppercase alphabets.
 Your task is to find the longest string that can be constructed such that 
it is a child of both A string is said to be a child of another string 
if it can be formed by deleting 0 or more characters from the other string

Input format

First line of input contains a string S1 
Next line of input contains a string S2.

Output format

Print the length of the longest string S such that S is a child of both S1 and

S2

Code constraints

1 <= S1,S2 <= 50

Sample testcases

Input 1        Output 1
HARRY            2
SALLY

Input 2        Output 2
MADAM            4
MALAYALAM

*/

#include <bits/stdc++.h>
using namespace std;

int issubsequence(string s1, string s2) {
	int n = s1.length();
	int m = s2.length();
	int dp[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                }
            }
        }
        int ans=dp[0][0];
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                    ans=max(dp[i][j],ans);
                }
                else
                {
                    dp[i][j]=0;
                }
            }
        }
        return ans;
	
}

int main()
{
	string s1 = "MADAM";
	string s2 = "MALAYALAM";
	cout<<issubsequence(s1, s2);
	return 0;
}


