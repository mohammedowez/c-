Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]


class Solution {
public:
    
    vector<string> letterCombinations(string digits) 
    {
        vector<string> res;
        if(digits.size()==0)
            return res;
        res.push_back({});
        
      vector<string> mp = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    for(auto i=0;i<digits.size();i++)
    {
        string letter=mp[digits[i]-'0'];
        
        vector<string> temp;
        for(auto ch : letter)
        {
            for(auto s:res)
            {
                temp.push_back(s+ch);
            }
        } 
        res=temp;
    } 
       // sort(res.begin(),res.end());
        return res;
        
    }
};



#include<bits/stdc++.h>
#define ll long long int
# define pb push_back  
using namespace std;


vector<string> mappings = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, ans; 

void helper(string &digits, int i, string combi)
{	
	if(i == size(digits)) 
	{  // base condition - push when we have recursed for all digits
		ans.push_back(combi);    
		return;
	}
	// add and recurse for each character (chosen from current digit-charcter mapping)
	for(auto &c : mappings[digits[i] - '2'])
	{
	//	cout<<combi + c<<" ";
	//	combi.push_back(c);
		helper(digits, i + 1, combi+c);
	//	combi.pop_back();
	}
}   
vector<string> letterCombinations(string digits) 
{
	if(digits == "") return ans;         // no combinations formed without any digits
	helper(digits, 0, "");              
	return ans;
}
// recursive helper function



int main()
{
	string s;
	cin>>s;
	letterCombinations(s);
	cout<<"\n"<<" "<<"printing answer   ";
	for(auto i:ans)
	{
		cout<<i<<" ";
	} 
	
	return 0;
}
