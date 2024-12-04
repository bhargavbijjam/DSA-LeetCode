class Solution {
public:
    vector<vector<int>> result;
    void print_subseq(vector<int> v,int i,vector<int>& nums){
        if(i>=nums.size()){
            result.push_back(v);
            return;
        }

        v.push_back(nums[i]);
        print_subseq(v,i+1,nums);

        v.pop_back();
        print_subseq(v,i+1,nums);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        print_subseq(temp,0,nums);
        return result;
    }
};