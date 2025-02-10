class Solution {
public:
    string clearDigits(string s) {
        stack<char> lets;
        string res ="";
        for(int i=0;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                if(!(lets.empty()))
                    lets.pop();
            }
            else{
                lets.push((char)s[i]);
            }
        }
        while(!lets.empty()){
           res +=(char)lets.top();
           lets.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};