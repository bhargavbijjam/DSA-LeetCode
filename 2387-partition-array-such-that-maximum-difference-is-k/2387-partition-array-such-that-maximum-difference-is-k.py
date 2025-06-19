class Solution(object):
    def partitionArray(self, nums, k):

        nums.sort()
        count = 1
        i = len(nums) -1
        
        for j in range(i-1,-1,-1):
            if(nums[i]-nums[j]>k):
                count+=1
                i=j
        return count
            
                

        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        