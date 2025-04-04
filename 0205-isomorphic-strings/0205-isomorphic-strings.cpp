class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> storeS;
        unordered_map<char,int> storeT;
        for(int i=0;i<s.size();i++){
            if(storeS.find(s[i])==storeS.end()) storeS[s[i]] = i;
            if(storeT.find(t[i])==storeT.end()) storeT[t[i]] = i;
            if(storeS[s[i]]!=storeT[t[i]]) return false;
        }
        return true;
    }
};