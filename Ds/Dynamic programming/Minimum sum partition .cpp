Input: N = 4, arr[] = {1, 6, 11, 5} 
Output: 1
Explanation: 
Subset1 = {1, 5, 6}, sum of Subset1 = 12 
Subset2 = {11}, sum of Subset2 = 11   
  
  
  class Solution{
	public:
int subset(int arr[],int n,int sum)
{
    int dp[n+1][sum+1];
    
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i==0)
                dp[i][j]=false;
            if(j==0)
                dp[i][j]=true;
        }
    } 
    
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
            } 
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    
    int mn=sum;
    
    for(int i=1;i<=(sum/2);i++)
    {
        if(dp[n][i])
        mn=min(mn,sum-2*i);
    }
    
    return mn;
        
    
}
