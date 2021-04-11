#include<bits/stdc++.h>
using namespace std;

vector<long long> getNSL(long long arr[], int n)
{
    vector<long long> nsl;
    stack<pair<long long, int>> myStack;
    
    for(int i=0; i<n; i++){
        while(!myStack.empty() and myStack.top().first >= arr[i])
		{
            myStack.pop();
        }
        if(myStack.empty())
		{
            nsl.push_back(-1);
        }
        else
		{
            nsl.push_back(myStack.top().second);
        }
        myStack.push({arr[i], i});
    }
    
    return nsl;
}


int main()
{
	int n;
	cin>>n;

	long long a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	vector<long long > m=getNSL(a,n);
	for(auto i : m)
		cout<<i<<" ";	
	
	return 0;	
}

ip=6 2 5 4 5 1 6 
op=-1 -1 1 1 3 -1 5 
