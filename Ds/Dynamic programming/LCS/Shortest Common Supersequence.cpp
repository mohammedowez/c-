Input:
X = abcd, Y = xycd
Output: 6
Explanation: Shortest Common Supersequence
would be abxycd which is of length 6 and
has both the strings as its subsequences.


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(char* X, char* Y, int m, int n)
    {
        //code here
        int dp[m+1][n+1];
        
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(X[i-1]==Y[j-1])
                {
                    dp[i][j]= 1 +dp[i-1][j-1];
                } 
                else
                {
                    dp[i][j]=max(dp[i-1][j] ,dp[i][j-1]);
                } 
            }
        } 
        
        return (m+n-dp[m][n]);
    }
};
