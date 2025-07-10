class Solution(object):
    # def solve(self,text1,text2,i,j,dp):
    #     if(i == -1 or j == -1):
    #         return 0
    #     if(dp[i+1][j+1]!= -1):
    #         return dp[i+1][j+1]
    #     if(text1[i]==text2[j]):
    #         dp[i+1][j+1] = 1+self.solve(text1,text2,i-1,j-1,dp)
    #     else:
    #         dp[i+1][j+1] = max(self.solve(text1,text2,i-1,j,dp),self.solve(text1,text2,i,j-1,dp))
    #     return  dp[i+1][j+1]

    def longestCommonSubsequence(self, text1, text2):
        n = len(text1)
        m = len(text2)
        dp = [[0 for _ in range(m+1)] for _ in range(n+1)]

        for i in range(1,n+1):
            for j in range(1,m+1):
                if(text1[i-1]==text2[j-1]):
                    print(text1[i-1],text2[j-1])
                    dp[i][j] = dp[i-1][j-1]+1
                else:
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1])
        return dp[n][m]
        
        """
        :type text1: str
        :type text2: str
        :rtype: int
        """
        