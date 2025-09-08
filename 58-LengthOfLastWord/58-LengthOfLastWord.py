# Last updated: 09/09/2025, 01:28:22
class Solution(object):
    def lengthOfLastWord(self, s):
        s1=(s[::-1])
        s1=s1.strip()
        c=0
        for i in s1:
            if i!=" ":
                c+=1
            elif i==" ":
                break
        return c