# Last updated: 04/09/2025, 14:59:25
class Solution(object):
    def isPalindrome(self, x):
        x=str(x)
        return True if x == x[::-1] else False
        """
        :type
        :rtype: bool
        """
        