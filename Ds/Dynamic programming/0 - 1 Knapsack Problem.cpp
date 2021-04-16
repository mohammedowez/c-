Input:
N = 3
W = 4
values[] = {1,2,3}
weight[] = {4,5,1}
Output: 3
  
  
  int dp[1002][1002];



int solve(int w,int wt[],int val[],int n)
{
   
    
    if(n==0 || w==0)
        return 0;
    
    if(dp[n][w]!=-1)
        return dp[n][w];
        
    if(wt[n-1]<=w)
    {
        return dp[n][w]=max(val[n-1]+solve(w-wt[n-1],wt,val,n-1),solve(w,wt,val,n-1));
    } 
    else if(wt[n-1]>w)
    {
        return dp[n][w]=solve(w,wt,val,n-1);
    }
    
}

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       memset(dp,-1,sizeof(dp));
       return solve(W,wt,val,n);
       
    }
};
