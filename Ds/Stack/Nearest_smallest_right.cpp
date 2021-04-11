#include<bits/stdc++.h>
using namespace std;

vector<long long> getNSR(long long arr[], int n)
{
    vector<long long> nsr;
    stack<pair<long long, int>> myStack;
    
    for(int i=n-1; i>=0; i--)
	{
        while(!myStack.empty() and myStack.top().first >= arr[i])
		{
            myStack.pop();
        }
        if(myStack.empty())
		{
            nsr.push_back(n);
        }
        else
		{
            nsr.push_back(myStack.top().second);
        }
        myStack.push({arr[i], i});
    }
    reverse(nsr.begin(), nsr.end());
    return nsr;
}

int main()
{
	int n;
	cin>>n;

	long long a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	vector<long long > m=getNSR(a,n);
	for(auto i : m)
		cout<<i<<" ";	
	
	return 0;	
}

ip=  6 2 5 4 5 1 5
op=  1 5 3 5 5 7 7 
