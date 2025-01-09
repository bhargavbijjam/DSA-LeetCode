class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res = 0;
        for(auto i:words){
            if(i.find(pref) == 0) {
                res++;
                continue;
            } 
        }
        return res;
    }
};