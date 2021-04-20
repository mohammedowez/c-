Input:
A = 6, B = 6
str1 = ABCDGH
str2 = AEDFHR
Output: 3
Explanation: LCS for input Sequences
“ABCDGH” and “AEDFHR” is “ADH” of
length 3.

//recursive
    int lcs(int m,int n,string s,string s1)
{  
    
    if(m==0 || n==0)
        return 0;
    if(dp[m][n]!=-1)
        return dp[m][n];
    
    if(s[m-1]==s1[n-1])
    {
        return dp[m][n]=lcs(m-1,n-1,s,s1)+1;
    } 
    else
    {
        return dp[m][n]=max(lcs(m-1,n,s,s1),lcs(m,n-1,s,s1));
    }
    
    
              
              
}
//iterative
class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
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
        return dp[x][y];
    }
};
