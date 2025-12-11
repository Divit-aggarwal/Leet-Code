// Last updated: 11/12/2025, 18:34:32
class Solution {
public:
    string removeOccurrences(string s, string part) {
       while(s.length()>0 && s.find(part) < s.length() ){
            s.erase(s.find(part) , part.length());
       }
       return s;
    }
};