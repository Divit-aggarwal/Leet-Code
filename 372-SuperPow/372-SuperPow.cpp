// Last updated: 05/12/2025, 18:50:53
1class Solution {
2public:
3    const int MOD = 1337;
4
5    int powerMod(int a, int k) {
6        int result = 1;
7        a %= MOD;
8
9        while (k > 0) {
10            if (k & 1)
11                result = (result * a) % MOD;
12            a = (a * a) % MOD;
13            k >>= 1;
14        }
15        return result;
16    }
17
18    int superPow(int a, vector<int>& b) {
19        if (b.empty()) return 1;
20        
21        int lastDigit = b.back();
22        b.pop_back();
23
24        int part1 = powerMod(superPow(a, b), 10);
25        int part2 = powerMod(a % MOD, lastDigit);
26
27        return (part1 * part2) % MOD;
28    }
29};
30