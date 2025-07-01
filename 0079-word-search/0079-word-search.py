class Solution(object):
    def solve(self,i,j,row,col,board,ind,word):
        if(ind==len(word)):
            #print(board)
            #print(str(i) + " "+str(j))
            return True
        if(i<0 or j<0 or i>= row or j >= col or board[i][j]!=word[ind]):
            return False
        
        #print(board)
        board[i][j]="."
        top = self.solve(i-1,j,row,col,board,ind+1,word)
        bottom = self.solve(i+1,j,row,col,board,ind+1,word)
        left = self.solve(i,j-1,row,col,board,ind+1,word)
        right = self.solve(i,j+1,row,col,board,ind+1,word)
        board[i][j] = word[ind]
        #print(board)
        return top or bottom or left or right

    def exist(self, board, word):
        row = len(board)
        col = len(board[0])
        for i in range(row):
            for j in range(col):
                if(board[i][j]==word[0] and self.solve(i,j,row,col,board,0,word)):
                   return True
        return False
        """
        :type board: List[List[str]]
        :type word: str
        :rtype: bool
        """
        