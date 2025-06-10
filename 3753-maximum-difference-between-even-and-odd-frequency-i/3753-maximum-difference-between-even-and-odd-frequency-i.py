class Solution(object):
    def maxDifference(self, s):
        hashmap = defaultdict(int)
        for i in range(0,len(s)):
            hashmap[s[i]]+=1
        even_values = [v for v in hashmap.values() if v%2==0]
        odd_values = [v for v in hashmap.values() if v%2!=0]
        min_even = min(even_values)
        max_odd = max(odd_values)
        return max_odd - min_even
        """
        :type s: str
        :rtype: int
        """
        