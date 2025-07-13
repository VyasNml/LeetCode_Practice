class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s)==0:
            return 0
        
        i,j,longestLength= 0,1,0
        while i<len(s):
            length = 1
            while j<len(s):
                if s[j] in s[i:j]:
                    break
                else:
                    length+=1
                j+=1
            if length>longestLength:
                longestLength = length
            i+=1
            j=i+1 
        return longestLength
        