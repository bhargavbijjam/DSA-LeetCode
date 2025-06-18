class Solution(object):
    def divideArray(self, nums, k):
        nums.sort()
        res = []
        for i in range(0,len(nums),3):
            if (nums[i+2]-nums[i]<=k):
                res.append(nums[i:i+3])
            else :
                return []
        return res

        """
        :type nums: List[int]
        :type k: int
        :rtype: List[List[int]]
        """
        