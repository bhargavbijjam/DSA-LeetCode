class Solution {
public:
int helper(int n,int dp[]){
        if(n==1) return 1;
        if(n==2) return 2;
        if(dp[n]!=0) return dp[n];
        dp[n]=helper(n-1,dp)+helper(n-2,dp);
        return dp[n];
    } 
    int climbStairs(int n) {
        int dp[n+1];
        for(int i=0;i<n+1;i++) dp[i]=0;
        helper(n,dp);
        if(n>2)
            return dp[n];
        else return n;
    }
};