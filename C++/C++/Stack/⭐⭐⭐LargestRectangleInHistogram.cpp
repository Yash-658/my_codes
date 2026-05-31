// https://leetcode.com/problems/largest-rectangle-in-histogram/

// MOST OPTIMISED VERSION, uses a single stack, O(n) O(n)

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size();
//         stack<int> st;

//         // MOST OPTIMISED SINGLE STACK SOLUTION~
//         int maxArea = 0;

//         for(int i = n-1; i >= 0; i--){
//             while(!st.empty() && heights[st.top()] >= heights[i]) {
//                 int height = heights[st.top()];
//                 st.pop();
//                 int nsIndx = (st.empty() ? n: st.top());
//                 int area = height*((nsIndx - i) - 1);   // we know heights[i] is the prevSmaller elem
//                 maxArea = max(area, maxArea);
//             } 

//             st.push(i);
//         }

//         int psIndx = -1;
//         while(!st.empty()) {
//             int elem = heights[st.top()];
//             st.pop();
//             int nsIndx = (st.empty() ? n: st.top());
//             int area = elem*((nsIndx - psIndx) - 1);   // we know heights[i] is the prevSmaller elem
//             maxArea = max(area, maxArea);
//         }

//         return maxArea;
//     }
// };

// O(n) O(n)

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size();
//         stack<int> st;
//         vector<int> nextSmaller(n), prevSmaller(n);
//         // using monotonic stack~ 
//         // filling nextSmaller~
//         for(int i = n-1; i >= 0; i--){
//             while(!st.empty() && heights[st.top()] >= heights[i]) {
//                 st.pop();
//             } 

//             nextSmaller[i] = (st.empty() ? n: st.top());
//             st.push(i);
//         }

//         while(!st.empty()) {
//             st.pop();
//         }

//         // filling prevSmaller and calculating maxArea~
//         int maxArea = 0;
//         for(int i = 0; i < n; i++){
//             while(!st.empty() && heights[st.top()] >= heights[i]) {
//                 st.pop();
//             } 

//             prevSmaller[i] = (st.empty() ? -1: st.top());
//             int area = heights[i]*((nextSmaller[i] - prevSmaller[i]) - 1);
//             maxArea = max(area, maxArea);
//             st.push(i);
//         }

//         return maxArea;
//     }
// };