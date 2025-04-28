class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int lmax = height[0];
        int rmax = height[height.size()-1];
        int total = 0;
        while(i<j){
            if(lmax<rmax){
                i++;
                lmax=max(lmax,height[i]);
                total+=lmax-height[i];
            }
            else {
                j--;
                rmax = max(rmax,height[j]);
                total+= rmax-height[j];
            }

        }
        return total;  
    }
};