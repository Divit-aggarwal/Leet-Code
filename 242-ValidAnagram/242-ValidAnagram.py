# Last updated: 05/09/2025, 00:29:52
class Solution(object):
    def isAnagram(self, s, t):
        if len(s) != len(t):
            return False

        return sorted(s) == sorted(t)
        