class Solution(object):
    def moveZeroes(self, nums):
        firstZeroIndex = -1
        for i in range(0,len(nums)):
            if nums[i]==0:
                firstZeroIndex = i
                break

        if firstZeroIndex == -1:
            return nums
        
        for j in range(firstZeroIndex+1,len(nums)):
            if nums[j]!=0:
                nums[firstZeroIndex],nums[j]=nums[j],nums[firstZeroIndex]
                firstZeroIndex+=1
        return nums
                 
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        