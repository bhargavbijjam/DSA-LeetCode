class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int missingNumber = -1;
        for(int i=1;i<nums.size();i++){
            if((nums[i-1]+1)!=nums[i]){
                missingNumber = nums[i-1]+1;
                break;
            }
        }
        if(nums[nums.size()-1]==nums.size()-1)
            return nums.size();
        else if(nums[0]!=0)
            return 0;
        return missingNumber;
    }
};