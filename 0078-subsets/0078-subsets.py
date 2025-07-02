class Solution(object):
    def solve(self,nums,i,subset,res):
        if(i==len(nums)):
            res.append(list(subset))
            return
        #print(subset)
        self.solve(nums,i+1,subset,res)
        subset.append(nums[i])
        self.solve(nums,i+1,subset,res)
        subset.pop()

    def subsets(self, nums):
        i = 0
        subset = []
        res = []
        self.solve(nums,i,subset,res)
        return res

        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        