class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long poan = 1;
        long long nz = 0;
        long long poez = 1;
        vector<int> poaei(nums.size());
        for(int i=0;i<nums.size();i++){
            poan*=nums[i];
            if(nums[i]==0) nz++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) poez*=nums[i];
        }
        if(nz>1){
            for(int i=0;i<nums.size();i++) poaei[i]==0;
        }
        else{
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    poaei[i]=poan/nums[i];
                }
                else{
                    poaei[i] = poez;
                }
            }
        }
        return poaei;
    }
};