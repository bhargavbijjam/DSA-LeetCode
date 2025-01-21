class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long minSum = 0;
        long topSum=0,bottomSum=0;
        for(long j = 1;j<grid[0].size();j++) topSum+=grid[0][j];
        //cout<<topSum<<endl;
        minSum = topSum;
        for(long i=1;i<grid[0].size();i++){
            topSum -=grid[0][i];
            //cout<<topSum<<endl;
            bottomSum +=grid[1][i-1];  
            if(minSum>max(topSum,bottomSum)) minSum = max(topSum,bottomSum);
            //cout<<minSum<<endl;
        }
        return minSum;
    }
};