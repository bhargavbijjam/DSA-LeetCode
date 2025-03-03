class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for(int i:nums){
            totalSum += i;
        }
        int priSum = 0;
        for(int i=0;i<nums.size();i++){
            if(totalSum - nums[i]-priSum==priSum) return i;
            priSum +=nums[i];
        }
        return -1;
    }
};