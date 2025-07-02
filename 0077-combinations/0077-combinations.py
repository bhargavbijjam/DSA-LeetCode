class Solution(object):
    def solve(self,i,sub,res,n,k):
        if(i>n+1 or len(sub)>k):
            return
        if(len(sub)==k):
            res.append(list(sub))
            return
        self.solve(i+1,sub,res,n,k)
        sub.append(i)
        self.solve(i+1,sub,res,n,k)
        sub.pop()

    def combine(self, n, k):
        i = 1
        sub = []
        res = []
        self.solve(i,sub,res,n,k)
        return res

        """
        :type n: int
        :type k: int
        :rtype: List[List[int]]
        """
        