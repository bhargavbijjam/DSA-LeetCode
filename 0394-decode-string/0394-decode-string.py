class Solution(object):
    def decodeString(self, s):
        stack = []
        curr_num=0
        curr_str = ""
        for char in s:
            if char.isdigit():
                curr_num = curr_num*10 + int(char)
            elif char =='[':
                stack.append((curr_num,curr_str))
                curr_num = 0
                curr_str =""
            elif char ==']':
                num,last_str = stack.pop()
                curr_str = last_str + curr_str * num 
            else:
                curr_str+=char
        return curr_str
        """
        :type s: str
        :rtype: str
        """
        