class Solution {
public:
    int nextGreater(int num,int j,vector<int> nums2){
        for(int k=j+1;k<nums2.size();k++){
            if(num<nums2[k]) return nums2[k];
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    res.push_back(nextGreater(nums2[j],j,nums2));
                    break;
                }
            }
        }
        return res;
    }
};