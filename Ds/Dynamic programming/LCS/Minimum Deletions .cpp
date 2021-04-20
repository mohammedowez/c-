Input: S = "aebcbda"
Output: 2
Explanation: Remove characters 'e' 
and 'd'.


int dp[1002][1002];
class Solution{
  public:
    int minimumNumberOfDeletions(string s)
    { 
        // code here
        string s1=s;
        reverse(s1.begin(),s1.end());
        
        int n=s.size();
        int m=s1.size();
        
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==s1[j-1])
                {
                    dp[i][j]=dp[i-1][j-1] +1;
                } 
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        return (dp[n][m]);
    } 
};
