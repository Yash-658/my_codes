// In love bbar code (lec 65), phele ek pura path nikal rhe, phir jo last node hai path mai, usko leke as a ending node jitne bhi path bn skte with sum k vo nikalke + krwa rhe, and doing this for every node~
// love bbar and my brute force code is O(n^2), [it's not optimised, using prefix sum and hashmap we optimise it to O(n)]


// My brute force code, TC- O(n^2)
// class Solution {
//   public:
   
//     void allPaths(Node *root, int k, int &count, int sum = 0) {
//         // base case
//         if(!root) return;
        
//         // add current value to sum
//         int curr_sum = sum + root->data;
        
//         // check if curr_sum == k, if it is, increase count;
//         if(curr_sum == k) count++;
        
//         allPaths(root->left, k, count, curr_sum);
//         allPaths(root->right, k, count, curr_sum);
//     }
    
//     void solve(Node *root, int k, int &count) {
//         // if null return
//         if(!root) return;
        
//         allPaths(root, k, count);
//         solve(root->left, k, count);
//         solve(root->right, k, count);
//     }
    
//     int sumK(Node *root, int k) {
//         int count = 0;
//         solve(root, k, count);
//         return count;
//     }
// };