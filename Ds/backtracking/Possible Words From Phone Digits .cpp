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
