# Last updated: 09/09/2025, 01:28:20
class Solution(object):
    def findClosest(self, x, y, z):
        if abs(x-z) > abs(y-z) :
            return 2
        elif abs(y-z) > abs(x-z) :
            return 1
        else:
            return 0
        