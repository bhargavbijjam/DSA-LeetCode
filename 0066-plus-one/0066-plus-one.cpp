class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        if(size>1){
            for(int i=size-1;i>=0;i--){
                if(digits[i]>=9){
                    digits[i]-=9;
                    //digits[i-1]+=1;
                }
                else{
                    digits[i]+=1;
                    break;
                }
            }
        }
        if(size==1) digits[0]+=1; 
        if(digits[0]==10||digits[0]==0){
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
        return digits; 
    }
};