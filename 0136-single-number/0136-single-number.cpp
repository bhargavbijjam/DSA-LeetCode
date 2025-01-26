class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> ma;
        for(int i =0;i<nums.size();i++){
            ma[nums[i]]++;
        }
        int res = -1;
        for(auto i:ma){
            if(i.second == 1){
                res = i.first;
            }
        }
        return res;
    }
};