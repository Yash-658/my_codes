// https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1   
// MOST OPTIMAL: O(n) O(n)

// INTUTION: used prefixXOR here~

// int subarraysXor(vector<int> &arr, int x)
// {
//     unordered_map<int,int> prefixXor;
//     int ans = 0, curr_xor = 0;

//     for(int curr: arr){
//         curr_xor = curr_xor^curr;
//         if(curr_xor == x) ans++;

//         // add all the subarrays ending at curr with xor == x
//         ans += prefixXor[curr_xor^x];

//         // store this prefixXor
//         prefixXor[curr_xor]++;
//     }

//     return ans;
// }