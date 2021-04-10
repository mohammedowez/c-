#include <bits/stdc++.h>
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

vector<long long> getNSR(long long arr[], int n)
{
    vector<long long> nsr;
    stack<pair<long long, int>> myStack;
    
    for(int i=n-1; i>=0; i--){
        while(!myStack.empty() and myStack.top().first >= arr[i]){
            myStack.pop();
        }
        if(myStack.empty()){
            nsr.push_back(n);
        }
        else{
            nsr.push_back(myStack.top().second);
        }
        myStack.push({arr[i], i});
    }
    reverse(nsr.begin(), nsr.end());
    return nsr;
}

class Solution
{
    public:
    long long getMaxArea(long long arr[], int n){
        vector<long long> nsl = getNSL(arr, n);
        vector<long long> nsr = getNSR(arr, n);
        vector<long long> widths(n);
        
        for(int i=0; i<n; i++){
            widths[i] = nsr[i] - nsl[i] - 1;
        }
        
        long long maxArea = widths[0] * arr[0];
        for(int i=1; i<n; i++){
            long long area = widths[i] * arr[i];
            if(area > maxArea){
                maxArea = area;
            }
        }
        return maxArea;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends

ip=  6 2 5 4 5 1 5
op=  1 5 3 5 5 7 7 
