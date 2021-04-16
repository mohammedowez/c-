

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
