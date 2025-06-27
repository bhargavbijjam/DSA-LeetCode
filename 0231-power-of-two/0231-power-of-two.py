class Solution(object):
    def helper(self,n,count):
        if (n<0): return False
        if (n==0 and count==1):
            return True
        if(n==0):
            return False
        if((n & 1)==1):
            count+=1
        return self.helper(n>>1,count)
    def isPowerOfTwo(self, n):
        return self.helper(n,0)
        
        """
        :type n: int
        :rtype: bool
        """
        