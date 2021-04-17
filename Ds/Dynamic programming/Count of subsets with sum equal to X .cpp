#include<bits/stdc++.h>
using namespace std;

int solve(int sum,int a[],int n)
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
			if(a[i-1]<=j)
			{
				dp[i][j]= dp[i-1][j-a[i-1]] + dp[i-1][j];
				// cout<<i<<j<<" 1= "<<dp[i][j]<<" ";
			} 
			else
			{
			
			dp[i][j]= dp[i-1][j];
			 //cout<<i<<j<<" 1= "<<dp[i][j]<<" ";
		}
		} 
		cout<<endl;
	}
	
if(dp[n][sum]!=0)
	return dp[n][sum];
return 0;	
}


int main()
{
	int sum;
	cin>>sum;
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	} 
	
	cout<<solve(sum,a,n);
	
	return 0;
}



Input: arr[] = {1, 2, 3, 3}, X = 6 
Output: 3 
All the possible subsets are {1, 2, 3}, 
{1, 2, 3} and {3, 3}
 

Input: arr[] = {1, 1, 1, 1}, X = 1 
Output: 4 
