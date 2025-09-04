# Last updated: 04/09/2025, 15:17:12
class Solution(object):
    def findClosest(self, x, y, z):
        if abs(x-z) > abs(y-z) :
            return 2
        elif abs(y-z) > abs(x-z) :
            return 1
        else:
            return 0
        