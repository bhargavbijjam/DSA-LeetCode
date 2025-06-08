class Solution(object):
    def lengthOfLastWord(self, s):
        count = 0
        stack = []
        for i in range(0,len(s)):
            if s[i]==" " :
                if (count != 0):
                    stack.append(count)
                count = 0
            else :
                count+=1
            i+=1
        if count > 0:
            stack.append(count)
        return stack.pop()

            
        """
        :type s: str
        :rtype: int
        """
        