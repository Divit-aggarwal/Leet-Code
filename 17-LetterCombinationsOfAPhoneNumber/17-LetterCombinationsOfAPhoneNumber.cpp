// Last updated: 11/12/2025, 18:35:03
class Solution {
    private:
    void solve(string digits , string out , int index , vector<string>& ans , string mapp[]){
        if(index == digits.length()){
            ans.push_back(out);
            return;
        }
        int number = digits[index] - '0';
        string m = mapp[number];
        for(int i = 0 ; i < m.length() ; i++){
            out.push_back(m[i]);
            solve(digits , out , index + 1 , ans , mapp);
            out.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
         if(digits.length()==0){
            return ans;
         }
        string out ;
        int index = 0 ;
        string  mapp[10] = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"} ;
        solve(digits,out, index , ans , mapp);
        return ans;
    }
};