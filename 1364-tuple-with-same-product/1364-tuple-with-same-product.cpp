class Solution {
public:
    long fact(int n)
    {
        if(n==0)
            return 1;
        long res = 1;
        for (int i = 2; i <= n; i++)
            res = res * i;
        return res;
    }
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> prod;
        int product;
        for(int i=0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[i]!=nums[j]){
                    product = nums[i]*nums[j];
                    prod[product]++; 
                }
            }
        }
        int count=0;
        for(auto i:prod){
            if(i.second>1){
                count+=(fact(i.second)/fact(i.second-2) * 4 );
            }
        }
        return count;
    }
};