class Solution(object):
    def mergeAlternately(self, word1, word2):
        i=0
        merged_string = ""
        while(i<len(word1) and i<len(word2)):
            merged_string+=(word1[i]+word2[i])
            i+=1
        while(i<len(word1)):
            merged_string+=word1[i]
            i+=1
        while(i<len(word2)):
            merged_string+=word2[i]
            i+=1
        return merged_string

        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        