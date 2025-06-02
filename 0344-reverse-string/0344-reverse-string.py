class Solution(object):
    def reverseString(self, s):
        n = len(s)
        i = 0
        while i<n-1-i:
            temp = s[i]
            s[i] =s[n-1-i]
            s[n-1-i] = temp
            i+=1

        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        