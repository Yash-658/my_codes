// https://leetcode.com/problems/maximal-rectangle/

// O(n) O(n) Most Optimal solution as used the same height array again and again and usd the most optimised largest area in a histogram (single stack) approach~

// class Solution {
// public:
//     int maximalRectangle(vector<vector<char>>& matrix) {
//         int maxArea = 0;
//         int rows = matrix.size(), cols = matrix[0].size();
//         vector<int> heights(cols, 0);
        
//         for(int row = 0; row < rows; row++) {
//             stack<int> st;
//             // updating the heights vector for this row~
//             for(int col = 0; col < cols; col++) {
//                 if(matrix[row][col] == '1') heights[col]++;
//                 else heights[col] = 0;
//             }

//             for(int i = cols-1; i >= 0; i--) {
//                 while(!st.empty() && heights[st.top()] >= heights[i]) {
//                     int elem = st.top();
//                     st.pop();
//                     int nsIndx = (st.empty() ? cols: st.top());
//                     int area = heights[elem]*((nsIndx-i)-1);
//                     maxArea = max(area, maxArea);
//                 }

//                 st.push(i);
//             }

//             int psIndx = -1;
//             while(!st.empty()) {
//                 int elem = st.top();
//                 st.pop();
//                 int nsIndx = (st.empty() ? cols: st.top());
//                 int area = heights[elem]*((nsIndx-psIndx)-1);
//                 maxArea = max(area, maxArea);
//             }
//         }

//         return maxArea;
//     }
// };