// https://www.geeksforgeeks.org/problems/maximum-of-minimum-for-every-window-size3453/1

// class Solution {
//   public:
//     vector<int> maxOfMins(vector<int>& arr) {
//         int n = arr.size();
//         vector<int> ans(n, 0);
//         stack<int> st;
        
//         for(int i = n-1; i >= 0; i--) {
//             while(!st.empty() && arr[st.top()] >= arr[i]) {
//                 // so process the element getting popped~
//                 int elem = st.top();
//                 int prevSmall = i;
//                 st.pop();
//                 int nextSmall = (st.empty() ? n: st.top());
//                 int windSpan = nextSmall-prevSmall-1;
//                 ans[windSpan-1] = max(ans[windSpan-1], arr[elem]);
//             }
//             st.push(i);
//         }
        
//         int psInd = -1;
//         while(!st.empty()) {
//             int elem = st.top();
//             st.pop();
//             int nextSmall = (st.empty() ? n: st.top());
//             int windSpan = nextSmall-psInd-1;
//             ans[windSpan-1] = max(ans[windSpan-1], arr[elem]);
//         }
        
//         for(int i = n-2; i >= 0; i--) {
//             ans[i] = max(ans[i], ans[i+1]);
//         }
        
//         return ans;
//     }
// };