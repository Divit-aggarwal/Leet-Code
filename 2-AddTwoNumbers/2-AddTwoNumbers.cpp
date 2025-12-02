// Last updated: 02/12/2025, 16:02:07
1class Solution {
2public:
3    string removeOccurrences(string s, string part) {
4       while(s.length()>0 && s.find(part) < s.length() ){
5            s.erase(s.find(part) , part.length());
6       }
7       return s;
8    }
9};