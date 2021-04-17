Input:
N=8
Price []={3,   5,   8,   9,  10,  17,  17,  20}
Output: 24
Explanation: 
The maximum obtainable value is 
24 by cutting the rod into 8 pieces 
of length 1, i.e, 8*3=24. 

int cutRod(int price[], int n) 
{
   int length[n];
for(int i = 0; i < n; i++) length[i] = i+1;

int size = sizeof(length)/sizeof(int);
int dp[n+1][n+1];

memset(dp,0,sizeof(dp));

for(int i = 1; i <= n; i++){
for(int j = 1; j <= size; j++){
if(length[i-1] <= j)
dp[i][j] = max(price[i-1]+dp[i][j-length[i-1]] , dp[i-1][j]);
else
dp[i][j] = dp[i-1][j];
}
}
return dp[n][n];
}
