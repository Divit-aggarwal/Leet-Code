// Last updated: 19/03/2026, 20:24:47
class Solution {
public:
   int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    heights.push_back(0);  // sentinel
    int maxArea = 0;

    for (int i = 0; i < heights.size(); i++) {
        while (!st.empty() && heights[st.top()] > heights[i]) {
            int h = heights[st.top()];
            st.pop();
            int left = st.empty() ? -1 : st.top();
            int width = i - left - 1;
            maxArea = max(maxArea, h * width);
        }
        st.push(i);
    }
    return maxArea;
}

};