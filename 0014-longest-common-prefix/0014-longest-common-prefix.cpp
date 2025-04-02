class Solution {
public:
    string lcp(string a,string b){
        string cp="";
        if(a[0]==b[0]){
            for(int i=0;((i<min(a.size(),b.size())) and (a[i]==b[i]));i++){
                cp+=a[i];
            }
        }
        return cp;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        string ans = lcp(strs[0],strs[1]);
        if(strs.size()>2){
            for(int i = 2;i<strs.size();i++){
                ans = lcp(ans,strs[i]);
            }
        }
        return ans;
    }
};