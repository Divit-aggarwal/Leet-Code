# Last updated: 05/09/2025, 00:30:18
class Solution(object):
    def isAnagram(self, s, t):
        
        
        if len(s)!=len(t):
            return False
        for i in set(s):
            
            if t.count(i)!=s.count(i):
               
                return False
        
        return True
        