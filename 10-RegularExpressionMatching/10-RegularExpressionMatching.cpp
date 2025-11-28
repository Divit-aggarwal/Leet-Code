// Last updated: 28/11/2025, 23:41:34
1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        for (int i = digits.size() - 1; i >= 0; i--) {
5            if (digits[i] + 1 != 10) {
6                digits[i] += 1;
7                return digits;
8            }
9            digits[i] = 0;
10            if (i == 0) {
11                digits.insert(digits.begin(), 1);
12                return digits;
13            }
14        }
15        return digits;        
16    }
17};