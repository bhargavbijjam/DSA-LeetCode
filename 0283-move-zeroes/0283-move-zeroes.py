class Solution(object):
    def moveZeroes(self, nums):
        i=0
        while i<len(nums):
            if nums[i]==0:
                for j in range(i+1,len(nums)):
                    if nums[j]!=0:
                        nums[i],nums[j]=nums[j],nums[i]
                        break
            i+=1
        return nums
                 
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        