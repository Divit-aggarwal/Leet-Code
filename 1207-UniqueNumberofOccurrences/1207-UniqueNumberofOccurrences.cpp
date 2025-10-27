// Last updated: 27/10/2025, 23:54:23
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int > freq;

        for ( auto val : arr ){
            freq[val]++;
        }
        unordered_set<int> set ;
     for ( auto val : freq ){
        if (set.count(val.second)) return false;
        set.insert(val.second);
    }
    return true;
    }
};