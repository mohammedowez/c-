Input: V = 30, M = 3, coins[] = {25, 10, 5}
Output: 2
Explanation: Use one 25 cent coin
and one 5 cent coin


class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    
	    long long dp[M+1][V+1];
	    int m=INT_MAX-1;
	    
        for(int i = 1; i <= M; i++)
            dp[i][0] = 0;
        
        for(int j = 0; j <= V; j++) 
	        dp[0][j] = INT_MAX-1;
	   
	    
	    
	    for(int j=1;j<=V;j++)
	    {
	        if(j%coins[0]==0)
	        {
	            dp[1][j]=j/coins[0];
	        }
	        else
	        {
	            
	            dp[1][j]=m;
	        }
	    }
	    
	    for(int i=2;i<=M;i++)
	    {
	        for(int j=1;j<=V;j++)
	        {
	            if(coins[i-1]<=j)
	            {
	                dp[i][j]=min(dp[i-1][j] , dp[i][j-coins[i-1]]+1);
	            } 
	            else
	                dp[i][j]=dp[i-1][j]; 
	        }
	    }
	    if(dp[M][V] < INT_MAX-1) return dp[M][V];
        else return -1;
	    //return dp[M][V];
	    
	    
	} 
	  
};
