class Solution {
public:
    string reverseWords(string s) {
        string word="";
        string ans;
        int i=s.size()-1;
        while(i>=0){
            if(s[i]==' '){
                if(word!=""){
                    reverse(word.begin(),word.end());
                    ans+=(" "+word);
                    word = "";
                }
            }
            else{
                word+=s[i];
            }
            i--;
        }
        if(word!=""){
            reverse(word.begin(),word.end());
            ans+=(" "+word);
        }
        ans = ans.substr(1,ans.length()-1);
        return ans;
    }
};