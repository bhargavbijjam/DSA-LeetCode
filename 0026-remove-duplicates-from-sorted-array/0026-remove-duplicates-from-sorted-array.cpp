class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> unique;
        for(int i=0;i<nums.size();i++){
            unique.insert(nums[i]);
        }
        nums.assign(unique.begin(),unique.end());
        return unique.size();
    }
};