class Solution {
public:

    int minimumDays(vector<int>& bloomDay,int m,int k,int low,int high){
        if((double) m*k > (double) bloomDay.size()) return -1;
        if(low==high) return high;
        int mid = low+(high - low)/2;
        int count = 0;
        int bouquet = 0;
        for(int z=0;z<bloomDay.size();z++){
            if((bloomDay[z])<=mid) {
                count++;
                if(count == k) {
                    bouquet++;
                    count = 0;
                }
            }
            else count = 0;
        }
        if(bouquet < m ) return minimumDays(bloomDay,m,k,mid+1,high);
        else return minimumDays(bloomDay,m,k,low,mid);
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        return minimumDays(bloomDay,m,k,*min_element(bloomDay.begin(),bloomDay.end()),*max_element(bloomDay.begin(),bloomDay.end()));
    }
};