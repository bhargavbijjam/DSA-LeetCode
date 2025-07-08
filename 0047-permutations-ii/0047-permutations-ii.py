class Solution(object):
    def solve(self,start,nums,res):
        if(start==len(nums)):
            res.add(tuple(nums))
            return
        
        for i in range(start,len(nums)):
            nums[i],nums[start] = nums[start],nums[i]
            self.solve(start+1,nums,res)
            nums[i],nums[start] = nums[start],nums[i]

    def permuteUnique(self, nums):
        res = set()
        self.solve(0,nums,res)
        return list(res)

        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        