class Solution(object):
    def maxSubArray(self, nums):
        max_sum = -10001
        sum = 0
        for num in nums:
            sum += num
            max_sum = max(max_sum,sum)
            if sum < 0:
                sum = 0
        return max_sum
            
        """
        :type nums: List[int]
        :rtype: int
        """
        