class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> store;
        for(int i=0;i<s.size();i++) store[s[i]]++;
        for(int i=0;i<t.size();i++){
            if(store.find(t[i]) != store.end() && store[t[i]]>0)
                store[t[i]]--;
            else return t[i];
        }
        return 'z';
    }
};