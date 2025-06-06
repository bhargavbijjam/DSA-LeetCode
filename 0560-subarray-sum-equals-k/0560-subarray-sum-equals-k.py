class Solution(object):
    def subarraySum(self, nums, k):

        count = 0 
        size = len(nums)
        prefixSum = 0
        prefixSumMpp= defaultdict(int)
        prefixSumMpp[0]=1
        for i in range(0,size):
            prefixSum += nums[i]
            remaining = prefixSum - k
            count += prefixSumMpp[remaining]
            prefixSumMpp[prefixSum]+=1
        return count

        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        