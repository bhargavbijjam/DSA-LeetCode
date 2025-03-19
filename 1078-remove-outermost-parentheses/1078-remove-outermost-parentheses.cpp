class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0 ;
        string par = "";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(count>0) par = par+s[i];
                count++;
            } 
            else{
                if(count>1) par = par+s[i];
                count--;
            }  
        }
        return par;
        
    }
};