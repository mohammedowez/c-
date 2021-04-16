

Input: N = 4
arr = {1, 5, 11, 5}
Output: YES
Explaination: 
The two parts are {1, 5, 5} and {11}.

#include<bits/stdc++.h>
using namespace std;

bool solve(int a[],int n,int s)

{ 
	if(s==0)
		return 1;
	
	if(n==0 or s<0)
		return 0;
		
	return solve(a,n-1,s-a[n-1]) or solve(a,n-1,s);
	
}



int main()
{
	
	int sum=0;
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	} 
	if(sum%2!=0)
	{
		cout<<"0";
	} 
	else
	{
	cout<<solve(a,n,sum/2);
	}
	return 0;
}


// iterative solution 

class Solution{
public:
bool isSubsetSum(int ar[],int n,int s)
{
bool dp[n+1][s+1];
for(int i=0;i<=n;i++){
for(int j=0;j<=s;j++){
if(i==0)
dp[i][j]=false;
else if(j==0)
dp[i][j]=true;
else if(ar[i-1]<=j)
{
dp[i][j]=dp[i-1][j-ar[i-1]] || dp[i-1][j];
}
else
{
dp[i][j]=dp[i-1][j];
}
}
}
return dp[n][s];
}
    int equalPartition(int n, int arr[])
    {
        // code here
     int s=0;
     for(int i=0;i<n;i++)
     {
         s=s+arr[i];
     } 
     
     if(s%2!=0)
     {
         return 0;
     } else
     {
        int  m=s/2;
         isSubsetSum(arr,n,m);
         
     }
     }
}
