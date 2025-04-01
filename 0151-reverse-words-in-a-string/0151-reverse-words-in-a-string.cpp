class Solution {
public:
    string reverseWords(string s) {
        stack<string> store;
        int i=0;
        string word="";
        while(i<s.size()){
            if(s[i]==' '){
                if(word!=""){
                    store.push(word);
                    word = "";
                    cout<<"In Loop"<<endl;
                }
            } 
            else word += s[i];
            i++;
        }
        if(word!=""){
            store.push(word);
        }
        string res = "";
        while(!store.empty()){
            res += store.top();
            store.pop();
            if(!store.empty()) res+=" ";
        }
        return res;
    }
};