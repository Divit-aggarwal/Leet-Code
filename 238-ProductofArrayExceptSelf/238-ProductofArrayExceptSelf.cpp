// Last updated: 19/03/2026, 20:24:00
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4       int n = nums.size() ;
5    vector<int> pre(n);
6    vector<int> post(n);
7    vector<int> res(n);
8        pre[0] = 1;
9        post[n-1] = 1;
10        // prefix 
11        for ( int i = 1; i < n; i++ ){
12             pre[i]= nums[i-1]*pre[i-1];
13        }
14        for ( int i = n - 2; i >= 0; i-- ){
15             post[i]= nums[i+1]*post[i+1];
16        }
17         for ( int i = 0; i < n; i++ ){
18             res[i]= pre[i]*post[i];
19
20        }
21        return  res;
22    
23    }
24};