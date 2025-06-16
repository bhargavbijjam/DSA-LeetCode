class Solution(object):
    def maximumDifference(self, nums):
        max_diff = -1
        for i in range(0,len(nums)-1):
            for j in range(i+1,len(nums)):
                if nums[j]-nums[i]>max_diff and nums[j]>nums[i]:
                    max_diff = nums[j]-nums[i]
        return max_diff

        """
        :type nums: List[int]
        :rtype: int
        """
        