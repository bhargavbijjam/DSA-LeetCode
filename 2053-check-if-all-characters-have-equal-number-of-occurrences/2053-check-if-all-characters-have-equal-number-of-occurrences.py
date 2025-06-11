class Solution(object):
    def areOccurrencesEqual(self, s):
        frequency_map = {}
        for char in s:
            if char in frequency_map:
                frequency_map[char]+=1
            else :
                frequency_map[char] = 1
        frequency = frequency_map.values()
        for i in range(0,len(frequency)-1):
            if frequency[i]!=frequency[i+1]:
                return False
        return True

        """
        :type s: str
        :rtype: bool
        """
        