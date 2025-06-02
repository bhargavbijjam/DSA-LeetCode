class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int n = s.size();
        while(i<(n-1)-i){
            swap(s[i],s[n-1-i]);
            i++;
        }
    }
};