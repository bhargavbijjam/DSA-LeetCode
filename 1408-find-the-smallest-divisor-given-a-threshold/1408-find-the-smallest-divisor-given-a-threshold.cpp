class Solution {
public:
    int minDivisor(vector<int>& nums,int threshold,int low, int high){
        if(high<=low) return high;
        int mid = low+(high-low)/2;
        int sum = 0;
        for(int i = 0;i<nums.size();i++) sum += ceil((double)nums[i]/(double) mid);
        if(sum>threshold){
            low = mid+1;
            return minDivisor(nums,threshold,low,high);
        }
        else{
            high = mid;
            return minDivisor(nums,threshold,low,high);
        }
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high = *max_element(nums.begin(),nums.end());
        return minDivisor(nums,threshold,1,high);
    }
};