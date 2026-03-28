// Last updated: 28/03/2026, 15:01:40
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string x;
5        for (char i : s) {
6            if (65 <= i && i <= 90) {
7                x += i;
8            }
9            else if (97 <= i && i  <= 122) {
10                x += i - 32;
11            }
12            else if (48 <= i && i <= 57) {
13                x += i;
14            }
15        }
16        cout<<x;
17        for (int ch1 = 0, ch2 = x.length() - 1; ch1 <= ch2; ch1++, ch2--) {
18            if (x[ch1] == x[ch2]) {
19                continue;
20            } else {
21                return false;
22            }
23        }
24        return true;
25    }
26};