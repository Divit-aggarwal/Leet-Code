# Last updated: 04/09/2025, 14:56:42
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        y = str(x)
        return y == y[::-1]
        