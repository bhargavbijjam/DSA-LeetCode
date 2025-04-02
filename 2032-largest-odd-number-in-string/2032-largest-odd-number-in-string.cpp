class Solution {
public:
    bool odd(char alpha){
        if((alpha-'0')%2!=0) return true;
        else return false;
    }
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--){
            if(odd(num[i])){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};