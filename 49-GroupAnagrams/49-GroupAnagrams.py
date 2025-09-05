# Last updated: 05/09/2025, 19:29:45
class Solution(object):
    def groupAnagrams(self, strs):
        res = defaultdict(list)
        for s in strs:
            sortedS = ''.join(sorted(s))
            res[sortedS].append(s)
        return list(res.values())