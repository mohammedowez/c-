class Solution {
public:
    void per(vector<string>& str,string ip,string op){
        if(ip.length()==0){
            str.push_back(op);  //inserting output to vector
            return;
        }
        string op1=op;
        string op2=op;
        if(isdigit(ip[0])){
            op1.push_back(ip[0]); //for digit directly push in output.
            ip.erase(ip.begin()+0); //delete digit
            per(str,ip,op1); //calling recursive function
        }
        else{
            op1.push_back(tolower(ip[0])); //converting char to lowerCase and pushing into output
            op2.push_back(toupper(ip[0])); //converting char to upperCase and pushing into output
            ip.erase(ip.begin()+0); //erasing char
            per(str,ip,op1); //calling recursive function for lowerCase char
            per(str,ip,op2); //calling recursive function for upperCase char
        }
        return;
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>str;
        string ip=s; 
        string op;
        
        per(str,ip,op); //calling recursive function
        return str;
    }
};
Input: S = "a1b2"
Output: ["a1b2","a1B2","A1b2","A1B2"]

