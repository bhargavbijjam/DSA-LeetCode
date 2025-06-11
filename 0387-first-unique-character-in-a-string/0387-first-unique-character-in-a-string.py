class Solution(object):
    def firstUniqChar(self, s):
        frequency = [0] * 256
        for char in s:
            frequency[ord(char)] +=1
        for i in range(0,len(s)):
            if frequency[ord(s[i])]==1:
                return i
        return -1
        """
        :type s: str
        :rtype: int
        """
        