// Last updated: 01/12/2025, 21:18:58
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        vector<int> f;
5        int i = 0;
6        int j = 0;
7        while(m>0 && n >0){
8            if (nums1[i] > nums2[j]){
9                f.push_back(nums2[j]);
10                j++;
11                n--;
12            }
13            else if ( nums1[i] < nums2[j]){
14                f.push_back(nums1[i]);
15                i++;
16                m--;
17            }
18            else{
19                f.push_back(nums1[i]);
20                f.push_back(nums2[j]);
21                i++;
22                j++;
23                n--;
24                m--;
25            }
26        }
27        while (m>0){
28            f.push_back(nums1[i]);
29            i++;
30            m--;
31        }
32            while (n>0){
33            f.push_back(nums2[j]);
34            j++;
35            n--;
36        }
37        nums1 = f;
38    }
39};