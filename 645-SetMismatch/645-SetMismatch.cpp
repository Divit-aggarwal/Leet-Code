// Last updated: 19/03/2026, 20:24:27
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> q;
        int s = 0;
        int e = nums.size();
        int ne = e * (e + 1) / 2;

        for (int i : nums) {
            s = s + i;
            if (map.count(i)) {
                map[i]++;
            } else {
                map[i] = 1;
            }
        }
        for (const auto& x : map) {
            if (x.second > 1) {
                q.push_back(x.first);
                int f = s - ne - x.first;
                q.push_back(abs(f));
                break;
            }
        }
        return q;
    }
};