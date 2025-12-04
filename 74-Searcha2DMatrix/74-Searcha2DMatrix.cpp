// Last updated: 04/12/2025, 14:16:20
1class Solution {
2public:
3    int countPrimes(int n) {
4        vector<bool> prime(n+1, true);
5        prime[0] = prime[1] = false;
6        int count = 0;
7
8        for (int i = 2; i < n; i++) {
9            if (prime[i]) {
10                count++;
11                for (int j = 2 * i; j < n; j += i) {
12                    prime[j] = false;
13                }
14            }
15        }
16        return count;
17    }
18};