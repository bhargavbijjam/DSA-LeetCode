class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int index  = 0;
        for(int i = 0;i<3;i++){
            for(int j = 0;j<freq[i];j++){
                nums[index++] = i;
            }
        }

    }
};