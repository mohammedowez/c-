#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    string longestCommonSubstr(int x, int y, string s1, string s2)
    {
        // your cod[y+e here
        
        
        int dp[x+1][y+1];
        
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                } 
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        string s="";
        int index = dp[x][y];
        int i=x,j=y;
        while(i>0 &&  j>0)
        {
        	if(s1[i-1]==s2[j-1])
        	{
        		s.push_back(s1[i-1]);
        		i--;
				j--;
				index--;
			}
			else
			{
				if(dp[i-1][j] > dp[i][j-1])
				{
						s.push_back(s1[i-1]);
						i--;
						index--;
				}
				else
				{
					s.push_back(s2[j-1]);
					j--;
					index--;
				}
			} 
		} 
	while (i > 0)
    {
        s.push_back(s1[i - 1]);
        i--;
        index--;
    }
  
    while (j > 0)
    {
        s.push_back(s2[j - 1]);
        j--;
        index--;
    }
		reverse(s.begin(),s.end());
		return s;
    } 
    
};


int main()
{
    //int t; cin >> t;
   // while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr ( n, m,s1,s2) << endl;
    }
}

Input: X = "AGGTAB",  Y = "GXTXAYB"
Output: "AGXGTXAYB" OR "AGGXTXAYB" 
OR Any string that represents shortest
supersequence of X and Y
