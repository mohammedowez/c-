Input: str1 = "heap", str2 = "pea"
Output: 3
Explanation: 2 deletions and 1 insertion
p and h deleted from heap. Then, p is 
inserted at the beginning One thing to 
note, though p was required yet it was 
removed/deleted first from its position 
and then it is inserted to some other 
position. Thus, p contributes one to the 
deletion_count and one to the 
insertion_count.





class Solution{
		

	public:
	int minOperations(string s1, string s2) 
	{ 
	    // Your code goes here
	    int m=s1.size();
	    int n=s2.size();
	    int dp[m+1][n+1];
	    
	    memset(dp,0,sizeof(dp));
	    int res=0;
	    for(int i=1;i<=m;i++)
	    {
	        for(int j=1;j<=n;j++)
	        {
	            if(s1[i-1]==s2[j-1])
	            {
	              dp[i][j]=1+dp[i-1][j-1];
	             // res=max(res,dp[i][j]);
	            } 
	            else
	                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	        }
	    } 
	    
	    int z=m+n-2*dp[m][n];
	    return z;
	} 
};
