class Solution(object):
    def findWords(self, words):
        keyboard ={
            1 : ['q','w','e','r','t','y','u','i','o','p'],
            2 : ['a','s','d','f','g','h','j','k','l'],
            3 : ['z','x','c','v','b','n','m']
        }
        res = []
        for word in words:
            dup = word.lower()
            row = 1
            if dup[0] in keyboard[2]:
                row = 2
            elif dup[0] in keyboard[3]:
                row = 3
            flag = 1
            for letter in dup:
                if letter not in keyboard[row]:
                    flag = 0
                    break
            if (flag):
                res.append(word)
        
        return res



        """
        :type words: List[str]
        :rtype: List[str]
        """
        