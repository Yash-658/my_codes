// https://leetcode.com/problems/longest-subarray-with-at-most-k-distinct-prime-factors/description/

// class Solution {
// public:
//     vector<int> getPrimeFactors(int x) {
//         vector<int> factors;

//         for (int i = 2; i * i <= x; i++) {
//             if (x % i == 0) {
//                 factors.push_back(i);

//                 // Remove all occurrences of this prime factor
//                 while (x % i == 0) {
//                     x /= i;
//                 }
//             }
//         }

//         // Whatever remains is a prime factor
//         if (x > 1) {
//             factors.push_back(x);
//         }

//         return factors;
//     }

//     int longestSubarray(vector<int>& nums, int k) {
//         int maxm = *max_element(nums.begin(), nums.end());

//         // Sieve of Eratosthenes
//         vector<bool> isPrime(maxm + 1, true);
//         isPrime[0] = isPrime[1] = false;

//         for (int i = 2; i * i <= maxm; i++) {
//             if (isPrime[i]) {
//                 for (int j = i * i; j <= maxm; j += i) {
//                     isPrime[j] = false;
//                 }
//             }
//         }

//         unordered_map<int, int> freq;

//         int start = 0;
//         int ans = 0;

//         for (int end = 0; end < nums.size(); end++) {

//             // Add distinct prime factors of nums[end]
//             for (int p : getPrimeFactors(nums[end])) {
//                 freq[p]++;
//             }

//             // Shrink until there are at most k distinct prime factors
//             while (freq.size() > k) {

//                 // Remove distinct prime factors of nums[start]
//                 for (int p : getPrimeFactors(nums[start])) {
//                     freq[p]--;

//                     if (freq[p] == 0) {
//                         freq.erase(p);
//                     }
//                 }

//                 start++;
//             }

//             ans = max(ans, end - start + 1);
//         }

//         return ans;
//     }
// };