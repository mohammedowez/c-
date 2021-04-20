
Input:
S = "bbabcbcab"
Output: 7
Explanation: Subsequence "babcbab" is the
longest subsequence which is also a palindrome



int lcs(int m,int n,string s,string s1)
{  
    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));
    
     for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[i-1]==s1[j-1])
            {
                dp[i][j]= 1+ dp[i-1][j-1];
            }
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    
    return dp[m][n];
}
//User function Template for C++

int longestPalinSubseq (string s)
{
    // your code here
    
    string s1=s;
    reverse(s1.begin(),s1.end());
    int n=s1.size();
    int m=s.size();
  
    
   return lcs(m,n,s,s1);
   
}
