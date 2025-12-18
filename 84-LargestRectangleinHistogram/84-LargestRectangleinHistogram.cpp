// Last updated: 18/12/2025, 17:34:06
1class Solution {
2public:
3   int largestRectangleArea(vector<int>& heights) {
4    stack<int> st;
5    heights.push_back(0);  // sentinel
6    int maxArea = 0;
7
8    for (int i = 0; i < heights.size(); i++) {
9        while (!st.empty() && heights[st.top()] > heights[i]) {
10            int h = heights[st.top()];
11            st.pop();
12            int left = st.empty() ? -1 : st.top();
13            int width = i - left - 1;
14            maxArea = max(maxArea, h * width);
15        }
16        st.push(i);
17    }
18    return maxArea;
19}
20
21};