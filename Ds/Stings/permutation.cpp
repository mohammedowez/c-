#include <bits/stdc++.h>
using namespace std;

void solve(string ip,string op,vector<string> &res)
{
    if(ip.size()==0)
    {
        res.push_back(op);
        return ;
    
    } 
    
    string op1=op;
    string op2=op;
    
    op1.push_back(' ');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    
    solve(ip,op1,res);
    solve(ip,op2,res);
    return ;
    
  
}



class Solution{

public:
    vector<string> permutation(string S)
    {
        // Code Here
        vector<string> v;
        
        string op="";
        
        op.push_back(S[0]);
        S.erase(S.begin()+0);
        
        solve(S,op,v);
        return v;
    }
};


// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}


Input:
S = "ABC"
Output: (A B C)(A BC)(AB C)(ABC)
Explanation:
ABC
AB C
A BC
A B C
These are the possible combination of "ABC".
