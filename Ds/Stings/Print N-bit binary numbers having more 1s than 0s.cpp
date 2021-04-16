#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
void solve(int one ,int zero,int n,string op,vector<string> &v)
{
    if(n==0)
    {
        v.push_back(op);
        return;
    } 
    
    string op1=op;
    op1.push_back('1');
    solve(one+1,zero,n-1,op1,v);
    
    if(one>zero)
    {
        string op2=op;
        op2.push_back('0');
        solve(one,zero+1,n-1,op2,v);
    }
}


class Solution{
public:	
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    
	    string op="";
	    int one=0;
	    int zero=0;
	    vector<string> v;
	    solve(one,zero,N,op,v);
	    return v; 
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends


Input:  N = 3
Output: 111 110 101
Explanation: 111, 110 and 101 have more 
than or equal 1's than 0's
