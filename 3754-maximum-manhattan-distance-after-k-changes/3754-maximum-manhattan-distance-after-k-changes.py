class Solution(object):
    def maxDistance(self, s, k):
        vertical = 0
        horizontal = 0
        max_manhatten_dist = 0
        for i in range(0,len(s)):
            if s[i]=='N':
                vertical+=1
            elif s[i]=='S':
                vertical-=1
            elif s[i]=='E':
                horizontal +=1
            elif s[i]=='W':
                horizontal -=1
            max_manhatten_dist = max(max_manhatten_dist,min(i+1,abs(vertical)+abs(horizontal) + 2*k))
        return max_manhatten_dist
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        