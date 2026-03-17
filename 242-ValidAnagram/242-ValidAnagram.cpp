// Last updated: 18/03/2026, 00:53:33
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if (s.length() != t.length()){
5            return false;
6        }
7        else{
8        sort(s.begin() , s.end());
9        sort(t.begin() , t.end());
10        for ( int i = 0 ; i<s.length(); i++){
11            if(s[i]!=t[i]){
12                return false;
13            }
14        }
15        return true;
16    }
17    }
18};