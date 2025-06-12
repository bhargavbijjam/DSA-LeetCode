class Solution(object):
    def maxAdjacentDistance(self, nums):
        size = len(nums)
        max_diff = 0
        for i in range(0,size-1):
            max_diff = max(max_diff,abs(nums[i]-nums[i+1]))
        max_diff = max(max_diff,abs(nums[0]-nums[size-1]))
        return max_diff
        """
        :type nums: List[int]
        :rtype: int
        """
        