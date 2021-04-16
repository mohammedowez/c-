void solve(long long open, long long cl,string op,vector<string> &v)
{
    if(open==0 && cl==0)
    {
        v.push_back(op);
        return ;
    } 
    
    if(open!=0)
    {
        string op1=op;
        op1.push_back('(');
        solve(open-1,cl,op1,v);
    } 
    
    if(cl>open)
    {
        string op2=op;
        op2.push_back(')');
        solve(open,cl-1,op2,v);
    }
    return ;
}



class Solution
{
    public:
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> v;
        long long open=n;
        long long cl=n;
        
        string op="";
        
        solve(open,cl,op,v);
        return v;
    }
};


Input:
N = 3
Output:
((()))
(()())
(())()
()(())
()()()
