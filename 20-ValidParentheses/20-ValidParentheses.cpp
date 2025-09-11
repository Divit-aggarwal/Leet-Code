// Last updated: 11/09/2025, 16:07:39
#include<stack>
using namespace std;
#include<string>
class Solution {
public:
    bool isValid(string s) {
               stack<char> s1;
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                s1.push(ch);
            } else {
                if (s1.empty()) {
                    return false;
                }
                char top = s1.top();
                s1.pop();
                if (ch == ')' && top != '(') {
                    return false;
                }
                
                if (ch == ']' && top != '['){
                 return false;
                }
                if (ch == '}' && top != '{'){
                     return false;
                }
            }
        }
        return s1.empty();
    }
};
