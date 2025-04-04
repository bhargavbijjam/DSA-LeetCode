class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,char> sVisit;
        map<char,char> tVisit;
        for(int i=0;i<s.size();i++){
            if((sVisit.find(s[i])==sVisit.end()) && (tVisit.find(t[i])==tVisit.end())){
                sVisit[s[i]]=t[i];
                tVisit[t[i]]=s[i];
                s[i]=t[i];
            }
            else if(sVisit.find(s[i])!=sVisit.end()){
                s[i] = sVisit[s[i]];
            }
            else if(tVisit.find(t[i])!=tVisit.end()){
                if(tVisit[t[i]] == s[i]) s[i] = tVisit[t[i]];
                else return false;
            }

        }
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" "<<t[i]<<endl;
            if(s[i]!=t[i]) return false;
        }
        return true;
    }
};