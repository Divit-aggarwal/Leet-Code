# Last updated: 27/11/2025, 16:56:41
class Solution(object):
    def findClosest(self, x, y, z):
        if abs(x-z) > abs(y-z) :
            return 2
        elif abs(y-z) > abs(x-z) :
            return 1
        else:
            return 0
        