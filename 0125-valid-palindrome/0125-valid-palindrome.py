class Solution(object):
    def isPalindrome(self, s):

        s = s.lower()
        orginal=""
        reverse=""

        for i in s:
            if i.isalnum():
                orginal+=i
        reverse = orginal[::-1]
        if(reverse == orginal):
            return True
        else: return False
        """
        :type s: str
        :rtype: bool
        """
        