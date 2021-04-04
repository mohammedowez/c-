
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0),cin.tie(0);
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	
	vector<int> v(n);
	stack<int> s;
	

		for (int i = n-1; i >= 0; i--)
        {
            while (!s.empty () and s.top () <= a[i])
                s.pop ();
                
            if (s.empty ())
                v[i] = -1;
            else 
                v[i] = s.top ();
                
            s.push (a[i]);
        }
	
	//reverse(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
