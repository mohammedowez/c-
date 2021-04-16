#include <vector>
using namespace std;

int solve(vector<int>&v,int k, int index)
{
    if(v.size()==1)
    {
        return v[0];
    }
    index=(index+k)%v.size();
    v.erase(index+v.begin());
    solve(v,k,index);
    
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
    int n,k,index=0;
    cin>>n>>k;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
        k--;
        cout<<solve(v,k,index)<<endl;
        
    
    }
	return 0;
}


Input:
n = 2, k = 1
Output:
2
Explanation:
Here, n = 2 and k = 1, then safe position is
2 as the person at 1st position will be killed.
