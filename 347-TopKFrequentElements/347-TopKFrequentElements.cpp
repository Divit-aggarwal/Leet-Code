// Last updated: 18/03/2026, 01:48:48
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int , int> map;
5        vector<int> y;
6        for (int x : nums){
7            if(map.contains(x)!=0){
8                map[x]++;
9            }
10            else{
11                map[x]=1;
12            }
13        }
14        int max = -1;
15        int e = -1;
16        for (int j= 0 ; j <k; j++){
17            for ( int i : nums){
18            if (map[i] > max ){
19                max = map[i];
20                e = i;
21            }
22        }
23        map.erase(e);
24        y.push_back(e);
25        max = -1;
26        }
27        return y;
28    }
29};