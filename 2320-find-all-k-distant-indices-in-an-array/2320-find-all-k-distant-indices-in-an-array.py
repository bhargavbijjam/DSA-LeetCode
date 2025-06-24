class Solution(object):
    def findKDistantIndices(self, nums, key, k):
        i = 0
        distinct_indices = set()
        while(i<len(nums)):
            if(nums[i]==key):
                distinct_indices.add(i)
                for j in range(0,k+1):
                    if(i-j>=0):
                        distinct_indices.add(i-j)
                    if(i+j<len(nums)):
                        distinct_indices.add(i+j)
            i+=1
        distinct_indices=sorted(distinct_indices)
        return distinct_indices
        """
        :type nums: List[int]
        :type key: int
        :type k: int
        :rtype: List[int]
        """
        