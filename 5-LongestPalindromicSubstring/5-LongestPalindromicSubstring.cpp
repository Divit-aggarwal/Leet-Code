// Last updated: 06/12/2025, 20:57:06
1class Solution {
2public:
3    string longestPalindrome(string s) {
4        if (s.empty()) {
5            return "";
6        }
7
8        int start = 0;
9        int end = 0;
10
11        for (int i = 0; i < s.length(); i++) {
12            int odd = expandAroundCenter(s, i, i);
13            int even = expandAroundCenter(s, i, i + 1);
14            int max_len = max(odd, even);
15
16            if (max_len > end - start) {
17                start = i - (max_len - 1) / 2;
18                end = i + max_len / 2;
19            }
20        }
21
22        return s.substr(start, end - start + 1);        
23    }
24
25private:
26    int expandAroundCenter(string s, int left, int right) {
27        while (left >= 0 && right < s.length() && s[left] == s[right]) {
28            left--;
29            right++;
30        }
31        return right - left - 1;
32    }    
33};