class Solution {
public:
    bool isValid(string s) {
        stack<char> store;
        for(int i:s){
            if(i=='(' || i=='{' || i=='[' ) store.push(i);
            else{
                if(i==')'){
                    if(!store.empty() && store.top()=='(') store.pop();
                    else return false;
                }
                else if(i==']'){
                    if(!store.empty() && store.top()=='[') store.pop();
                    else return false;
                }
                else if(i=='}'){
                    if(!store.empty() && store.top()=='{') store.pop();
                    else return false;
                }
            }
        }
        if(store.empty()) return true;
        else return false;
    }
};