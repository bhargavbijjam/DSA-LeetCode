class Solution(object):
    def findLHS(self, nums):
        data = defaultdict(int)
        for num in nums:
            if num in data:
                data[num]+=1
            else:
                data[num]=1
        keys = [key for key in data.keys()]
        keys.sort()
        max_len = 0
        for i in range(0,len(keys)-1):
            if(abs(keys[i]-keys[i+1])==1):
                max_len = max(max_len,data[keys[i]] + data[keys[i+1]])
        return max_len
            


        """
        :type nums: List[int]
        :rtype: int
        """
        