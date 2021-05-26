class Solution
{
	public:
	vector<string> v;
	void solve(string s,int i)
	{
	    if(s[i]=='\0')
	    {
	        v.push_back(s);
	        return;
	    } 
	    for(int j=i;s[j]!='\0';j++)
	    {
	        swap(s[i],s[j]);
	        solve(s,i+1);
	        swap(s[i],s[j]);
	    }
	}
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    sort(S.begin(),S.end());
		    solve(S,0); 
		    sort(v.begin(),v.end());
		    return v;
		}
};
