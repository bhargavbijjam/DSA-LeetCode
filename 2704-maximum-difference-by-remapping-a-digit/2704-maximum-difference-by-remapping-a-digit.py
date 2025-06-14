class Solution(object):
    def minMaxDifference(self, num):
        max_num = str(num)
        min_num = str(num)

        for i  in max_num:
            if i < '9':
                max_num = int(max_num.replace(i,'9'))
                break
        min_num = int(min_num.replace(min_num[0],'0'))
        return int(max_num) - int(min_num)


        """
        :type num: int
        :rtype: int
        """
        