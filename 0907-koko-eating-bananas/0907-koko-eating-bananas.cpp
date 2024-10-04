class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxSpeed = *max_element(piles.begin(),piles.end());
        cout<<maxSpeed<<endl;
        int low = 1;
        int high = maxSpeed;
        if(h==piles.size()) return high;
        while(low<=high){
            long long totalHrs = 0;
            int BPerHr = low+(high-low)/2;
            for(auto i:piles) {
                totalHrs += (i + BPerHr - 1) / BPerHr;
                //cout<<totalHrs<<endl;
            }
            if(totalHrs <=h){
                high = BPerHr -1;
            } 
            else low = BPerHr +1;
        }
        return low;
    }
};