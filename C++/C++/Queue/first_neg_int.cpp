// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1


// this solution is with queue, intuitive but not fully optimised, TC- O(n) SC- O(k)

// class Solution {           
//   public:
//     vector<int> firstNegInt(vector<int>& arr, int k) {
//         vector<int> ans;
//         deque<int> q;
        
//         // push the elements of the first window 
//         for(int i = 0; i < k; i++) {
//             if(arr[i] < 0) {
//                 q.push_back(i);
//             }
//         }
        
//         // push the ans of the first window
//         if(!q.empty()) ans.push_back(arr[q.front()]);
//         else ans.push_back(0);
        
//         // traverse rest of the array
//         for(int i = k; i < arr.size(); i++) {
            
//             //removal
//             if(!q.empty() && i - q.front() >= k) {   // If the negative number at the front is outside the window, remove it.
//                 q.pop_front();                       // Because window is from i-k+1 to i, so if q.front() < i-k+1, remove it.
//             }
            
//             // addition
//             if(arr[i] < 0) {
//                 q.push_back(i);
//             }
            
//             // storing ans
//             if(!q.empty()) ans.push_back(arr[q.front()]);
//             else ans.push_back(0);
//         }
        
//         return ans;
//     }
// };

// this solution uses Sliding Window with Index Tracking - O(n) time and O(1) space~

// class Solution {
//   public:
//     vector<int> firstNegInt(vector<int>& arr, int k) {
//         int n = arr.size();
//         int firstNegInd = 0;
//         vector<int> ans;
        
//         for(int i = k-1; i < n; i++) {
            
//             // skipping out of window elements and non-negative numbers~
//             while((firstNegInd < i) && (firstNegInd <= i-k || arr[firstNegInd] >= 0)) {
//                 firstNegInd++;
//             }
            
//             // check if firstNegInd is -ve and in bounds~
//             if(firstNegInd < n && arr[firstNegInd] < 0) {
//                 ans.push_back(arr[firstNegInd]);
//             }
            
//             else {
//                 ans.push_back(0);
//             }
//         }
        
//         return ans;
//     }
// };