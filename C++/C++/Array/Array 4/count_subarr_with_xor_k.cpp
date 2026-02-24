// https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1   
// MOST OPTIMAL: O(n) O(n)

// INTUTION: used prefixXOR here~

// class Solution {
//   public:
//     long subarrayXor(vector<int> &arr, int k) {
//         unordered_map<int, int> prefixXOR;
//         int curr_xor = 0, ans = 0;
        
//         for(int i = 0; i < arr.size(); i++) {
//             curr_xor = curr_xor^arr[i];
            
//             if(curr_xor == k) ans++;
            
//             int to_find = curr_xor^k;
            
//             if(prefixXOR.find(to_find) != prefixXOR.end()) {
//                 ans += prefixXOR[to_find];
//             }
            
//             prefixXOR[curr_xor]++;
//         }
        
//         return ans;
//     }
// };