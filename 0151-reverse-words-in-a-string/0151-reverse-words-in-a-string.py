class Solution(object):
    def reverseWords(self, s):
        words = []
        sub = []
        for i in range(len(s)):
            if(s[i]==" "):
                if(len(sub)!=0):
                    words.append(str(''.join(sub)))
                    sub = []
            else:
                sub.append(s[i])
        if(len(sub)!=0):
            words.append(str(''.join(sub)))
        print(words)
        words.reverse()
        return " ".join(words)

