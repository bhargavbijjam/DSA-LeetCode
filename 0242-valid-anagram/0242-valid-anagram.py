class Solution(object):
    def isAnagram(self, s, t):
        if(len(s)!=len(t)): return False
        sorted_s = ''.join(sorted(s))
        sorted_t = ''.join(sorted(t))
        i=0
        j=0
        while(i<len(s) and j<len(t)):
            if(sorted_s[i]!=sorted_t[i]): return False
            i+=1
            j+=1
        return True
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        