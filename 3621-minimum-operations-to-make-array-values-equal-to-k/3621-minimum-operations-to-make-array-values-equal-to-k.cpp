class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        map<int,int> store;
        for(int i=0;i<nums.size();i++) store[nums[i]]++;
        if(store.begin()->first < k) return -1;
        else if(store.begin()->first == k) return store.size()-1;
        return store.size();
    }
};