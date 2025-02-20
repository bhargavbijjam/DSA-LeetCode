class Solution {
public:
    int helpSearchInsert(vector<int> nums,int target,int low,int high){
        if(low>=high) return high;
        int mid = low+(high-low)/2;
        if(nums[mid]==target) return mid;
        if(nums[mid]<target) low = mid +1;
        else high = mid;
        return helpSearchInsert(nums,target,low,high);
    }
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums[nums.size()-1]) return nums.size();
        return helpSearchInsert(nums,target,0,nums.size()-1);
    }
};