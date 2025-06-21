class Solution(object):
    def minimumDeletions(self, word, k):
        data = defaultdict(int)
        for char in word:
            data[char]+=1
        val = data.values()
        val.sort()
        bef_num = 0
        res = len(word)
        for i in range(len(val)):
            deleted_chars = 0
            for j in range(i+1,len(val)):
                if(val[j]>val[i]+k):
                    deleted_chars += val[j]-(val[i]+k)
            deleted_chars += bef_num
            res = min(res,deleted_chars)
            bef_num += val[i]
        return res


            



        """
        :type word: str
        :type k: int
        :rtype: int
        """
        