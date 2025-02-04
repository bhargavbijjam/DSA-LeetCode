class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int i = 0;
        int maxSum = 0;
        while(i<nums.size()){
            int j = i+1;
            int sum = nums[i];
            while(j<nums.size()){
                if(nums[j-1] < nums[j]){
                    sum +=nums[j];
                    j++;
                }
                else {
                    break;
                }
            }
            if(maxSum < sum) maxSum = sum;
            i = j;
        }
        return maxSum;
    }
};