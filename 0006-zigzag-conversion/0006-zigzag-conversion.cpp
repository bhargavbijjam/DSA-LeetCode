class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        int jumps = 2*(numRows-1);
        string res="";
        for(int i=0;i<numRows;i++){
            for(int j=i;j<s.size();j+=jumps){
                res+=s[j];
                if(i>0 && i<numRows-1 && j+jumps-(2*i)<s.size()){
                    res+=s[j+jumps-(2*i)];
                }
            }
        }
        return res;
    }
};