class Solution(object):
    def minimizeMax(self, nums, p):
        
        nums.sort()
        low_diff = 0
        high_diff = nums[len(nums)-1] - nums[0]
        min_max_diff = -1
        
        while(low_diff <= high_diff):
            mid_diff = low_diff + (high_diff - low_diff) // 2
            counter = 0
            i = 1
            while i < len(nums):
                if (nums[i] - nums[i-1]) <= mid_diff:
                    counter += 1
                    i += 2
                else:
                    i += 1
            if counter >= p:
                min_max_diff = mid_diff
                high_diff = mid_diff - 1
            else:
                low_diff = mid_diff + 1
        
        return min_max_diff
        """
        :type nums: List[int]
        :type p: int
        :rtype: int
        """
