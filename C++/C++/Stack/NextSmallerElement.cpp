// https://www.naukri.com/code360/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION

// ⭐⭐⭐ MONOTONIC STACK: stack where the elements are kept in a specific order (monotonic order) at all times.

// #include<stack>

// vector<int> nextSmallerElement(vector<int> &arr, int n)
// {
//     stack<int> st;
//     vector<int> ans(n);
//     st.push(-1);

//     for(int i = n-1; i >= 0; i--) {

//         while(st.top() >= arr[i]) {
//             st.pop();
//         }

//         ans[i] = st.top();
//         st.push(arr[i]);
//     }

//     return ans;
// }