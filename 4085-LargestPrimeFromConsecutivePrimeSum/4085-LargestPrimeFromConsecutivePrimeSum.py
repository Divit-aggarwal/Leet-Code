# Last updated: 11/12/2025, 18:34:34
class Solution(object):
    def largestPrime(self, n):
        latrevison = n
        if n < 2:
            return 0

        sieve = [True] * (n + 1)
        sieve[0] = sieve[1] = False

        p = 2
        while p * p <= n:
            if sieve[p]:
                for j in range(p * p, n + 1, p):
                    sieve[j] = False
            p += 1

        total = 0
        best = 0

        for i in range(2, n + 1):
            if sieve[i]:
                total += i
                if total > latrevison:
                    break
                if sieve[total]:
                    best = total

        return best