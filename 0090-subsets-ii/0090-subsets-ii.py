class Solution(object):
    def solve(self,nums,i,sub,res):
        if i==len(nums):
            if sub not in res:
                #print(sub)
                res.append(list(sub))
            return
        #print(res)
        self.solve(nums,i+1,sub,res)
        sub.append(nums[i])
        self.solve(nums,i+1,sub,res)
        sub.pop()

    def subsetsWithDup(self, nums):
        nums.sort()
        i = 0
        sub = []
        res = []
        self.solve(nums,i,sub,res)
        return res
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        