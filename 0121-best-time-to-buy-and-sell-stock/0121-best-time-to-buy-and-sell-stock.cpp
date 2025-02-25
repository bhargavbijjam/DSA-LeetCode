class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_val_ind= 0;
        int profit = 0;
        for(int i = 1;i<prices.size();i++){
            if(prices[min_val_ind]>prices[i]){
                min_val_ind = i;
            }
            profit = max(profit,prices[i]-prices[min_val_ind]);
        }
        return profit;
    }
};