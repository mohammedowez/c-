#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	int cs=0,os=0;
	for(int i=0;i<n;i++)
	{
		if(cs>=0)
		{
			cs=cs+a[i];
		} 
		else
		cs=a[i]; 
		
		if(cs>os)
			os=cs;
		
	}  
	
	cout<<os<<"\n";
}

int cs = nums[0];
   int ns = nums[0];
 
   for (int i = 1; i < nums.size(); i++)
   {
        cs = max(nums[i], cs+nums[i]);
        ns = max(ns, cs);
   }
   return ns;
    } 

