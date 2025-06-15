class Solution(object):
    def maxDiff(self, num):
        num_str = str(num)
        for i in num_str:
            if i!='9':
                max_num = int(num_str.replace(i,'9'))
                break
        else:
            max_num = int(num_str)
        print(max_num)

        if num_str[0]!='1':
            min_num = int(num_str.replace(num_str[0],'1'))
        else:
            for i in num_str:
                if(i!='0' and i!='1'):
                    min_num = int(num_str.replace(i,'0'))
                    break
            else:
                min_num = int(num_str)
            print(min_num)
        return max_num - min_num

        """
        :type num: int
        :rtype: int
        """
        