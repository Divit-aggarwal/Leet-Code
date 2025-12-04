// Last updated: 04/12/2025, 15:09:45
1class Solution {
2public:
3    double myPow(double x, int n) {
4        long long power = n;
5        if (power < 0) {
6            x = 1 / x;
7            power = -power;
8        }
9
10        double result = 1;
11
12        while (power) {
13            if (power & 1)
14                result *= x;
15
16            x *= x;
17            power >>= 1;
18        }
19
20        return result;
21    }
22};
23