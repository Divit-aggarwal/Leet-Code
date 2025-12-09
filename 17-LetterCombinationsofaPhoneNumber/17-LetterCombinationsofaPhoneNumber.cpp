// Last updated: 09/12/2025, 23:21:43
1class Solution {
2    private:
3    void solve(string digits , string out , int index , vector<string>& ans , string mapp[]){
4        if(index == digits.length()){
5            ans.push_back(out);
6            return;
7        }
8        int number = digits[index] - '0';
9        string m = mapp[number];
10        for(int i = 0 ; i < m.length() ; i++){
11            out.push_back(m[i]);
12            solve(digits , out , index + 1 , ans , mapp);
13            out.pop_back();
14        }
15    }
16public:
17    vector<string> letterCombinations(string digits) {
18        vector<string> ans;
19         if(digits.length()==0){
20            return ans;
21         }
22        string out ;
23        int index = 0 ;
24        string  mapp[10] = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"} ;
25        solve(digits,out, index , ans , mapp);
26        return ans;
27    }
28};