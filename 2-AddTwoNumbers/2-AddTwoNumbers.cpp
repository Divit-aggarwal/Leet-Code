// Last updated: 02/12/2025, 16:59:34
1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4        bool f;
5        if (s2.find(s1) > -1) {
6            return true;
7        }
8        sort(s1.begin(), s1.end());
9        string temp;
10        int x = s1.length();
11        if (x > s2.length()) {
12            return false;
13        }
14        for (int i = 0; i < s2.length(); i++) {
15            int count = 0;
16            temp.push_back(s2[i]);
17            if (temp.length() > x) {
18                temp.erase(0, 1);
19            }
20            if(temp.length()==x){
21            string temp2 = temp;
22            sort(temp2.begin(), temp2.end());
23            if (temp2 == s1) {
24                f = true;
25                return true;
26            }
27        }
28        }
29        return false;
30    }
31};