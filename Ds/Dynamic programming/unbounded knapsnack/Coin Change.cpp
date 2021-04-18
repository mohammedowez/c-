Input:
n = 4 , m = 3
S[] = {1,2,3}
Output: 4
Explanation: Four Possible ways are:
{1,1,1,1},{1,1,2},{2,2},{1,3}.

class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
        long long int dp[m+1][n+1];
        
        for(int i=0;i<m+1;i++)
        {
            dp[i][0]=1;
        }
        
        for(int j=1;j<n+1;j++)
        {
            dp[0][j]=0;
        }
        
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(S[i-1]<=j)
                {
                    dp[i][j] = dp[i-1][j] +  dp[i][j-S[i-1]];
                    
                }
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
       return dp[m][n];
        //code here.
        
        
    }
};



