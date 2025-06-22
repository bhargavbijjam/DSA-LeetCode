class Solution(object):
    def divideString(self, s, k, fill):
        res = []
        i=0
        while i<len(s):
            if(i+k-1 < len(s) ):
                res.append(s[i:i+k])
            else:
                break
            i+=k
        strng = []
        while i<len(s):
            strng.append(s[i])
            i+=1
        while(len(strng)%k!=0):
            strng.append(fill)
        if(len(strng)!=0):
            res.append(''.join(strng))
        return res

            
        """
        :type s: str
        :type k: int
        :type fill: str
        :rtype: List[str]
        """
        