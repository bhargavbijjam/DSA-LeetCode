class Solution(object):
    def solve(self,start,nums,res):
        if(start == len(nums)):
            print(nums)
            res.append(list(nums))
            return
            
        for i in range(start,len(nums)):
            nums[start],nums[i] = nums[i],nums[start]
            self.solve(start+1,nums,res)
            nums[start],nums[i] = nums[i],nums[start]
    
    def permute(self, nums):
        start = 0
        res = []
        self.solve(start,nums,res)
        return res
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        