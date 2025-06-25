class Solution(object):
    def lengthOfLongestSubstring(self, s):
        i = 0
        max_substr_len = 0
        j = 0
        length = 0
        store = defaultdict(int)
        while(j<len(s)):
            if(max_substr_len > len(s)-i):
                return max_substr_len
            if s[j] not in store:
                length += 1
                store[s[j]]=j
                j+=1
            else:
                del store[s[i]]
                length-=1
                i+=1
            max_substr_len = max(max_substr_len,length)
        return max_substr_len



        """
        :type s: str
        :rtype: int
        """
        