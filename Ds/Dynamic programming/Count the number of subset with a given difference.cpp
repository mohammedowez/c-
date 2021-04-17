ip= 

n=4
d=1
a=1 1 2 3
 op=
3
  
  #include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n,int s)
{
	int dp[n+1][s+1];
	
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<s+1;j++)
		{
			if(i==0)
				dp[i][j]=false;
			if(j==0)
				dp[i][j]=true;
		}
	} 
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=s;j++)
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
		//cout<<endl;
	}
return dp[n][s];

}


int main()
{
	
	
	int n;
	cin>>n;
	
	int a[n];
	int s=0;
	int d;
	cin>>d;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s=s+a[i];
	} 
	int sum=(d+s/2);
	cout<<solve(a,n,sum);
	
	return 0;
}
