class Solution(object):
    def minimumDeletions(self, word, k):
        data = defaultdict(int)
        for char in word:
            data[char]+=1
        val = data.values()
        res = len(word)
        for i in range(len(val)):
            deleted_chars = 0
            for j in range(len(val)):
                if(val[i]>val[j]):
                    deleted_chars += val[j]
                elif(val[j]>val[i]+k):
                    deleted_chars += val[j]-(val[i]+k)
            res = min(res,deleted_chars)
        return res


            



        """
        :type word: str
        :type k: int
        :rtype: int
        """
        