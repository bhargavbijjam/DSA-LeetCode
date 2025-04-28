class Solution {
public:
    map<int,int> nge(vector<int> nums){
        map<int,int> store;
        stack<int> m_stack;
        for(int i=nums.size()-1;i>=0;i--){
            while(!m_stack.empty() and m_stack.top()<=nums[i]){
                m_stack.pop();
            }
            if(!m_stack.empty()){
                store[nums[i]]=m_stack.top();
            }
            else {
                store[nums[i]]=-1;
            }
            m_stack.push(nums[i]);
        }
        return store;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> ngeData = nge(nums2);
        vector<int> res;
        for(int i:nums1){
            res.push_back(ngeData[i]);
        }
        return res;
    }
};