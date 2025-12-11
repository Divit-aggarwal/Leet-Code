// Last updated: 11/12/2025, 18:34:37
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        bool f;
        if (s2.find(s1) > -1) {
            return true;
        }
        sort(s1.begin(), s1.end());
        string temp;
        int x = s1.length();
        if (x > s2.length()) {
            return false;
        }
        for (int i = 0; i < s2.length(); i++) {
            int count = 0;
            temp.push_back(s2[i]);
            if (temp.length() > x) {
                temp.erase(0, 1);
            }
            if(temp.length()==x){
            string temp2 = temp;
            sort(temp2.begin(), temp2.end());
            if (temp2 == s1) {
                f = true;
                return true;
            }
        }
        }
        return false;
    }
};