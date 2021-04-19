Input: S1 = "ABCDGH", S2 = "ACDGHR"
Output: 4
Explanation: The longest common substring
is "CDGH" which has length 4



int longestCommonSubstr (string s1, string s2, int x, int y)
    {
        // your code here
        int dp[x+1][y+1];
        
        memset(dp,0,sizeof(dp));
        
        int res=0;
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                    res=max(res,dp[i][j]);
                } 
                else
                    dp[i][j]=0;
            }
        }
        return res;
    }
