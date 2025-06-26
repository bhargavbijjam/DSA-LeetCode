class Solution(object):
    def helper(self,l,r,s,n,res):
        if(l==n and r==n):
            res.append(''.join(s))
            return
        if(l<n):
            s.append('(')
            self.helper(l+1,r,s,n,res)
            s.pop()
        if(l>r and r<n):
            s.append(')')
            self.helper(l,r+1,s,n,res)
            s.pop()
        
            

    def generateParenthesis(self, n):
        res=list()
        self.helper(0,0,list(),n,res)
        return res
        """
        :type n: int
        :rtype: List[str]
        """
        