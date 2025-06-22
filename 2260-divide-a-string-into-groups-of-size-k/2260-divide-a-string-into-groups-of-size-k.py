class Solution(object):
    def divideString(self, s, k, fill):
        res = []
        i=0
        while i<len(s):
            res.append(s[i:i+k])
            i+=k
        res[-1]+=fill*(k-len(res[-1]))
        return res

            
        """
        :type s: str
        :type k: int
        :type fill: str
        :rtype: List[str]
        """
        