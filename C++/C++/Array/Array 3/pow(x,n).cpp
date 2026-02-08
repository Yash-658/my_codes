// we can do O(n) by loops or recursion but it's slow~
// we have to do optimize this by "Exponentiation by Squaring"~ O(logn)

// RECURSIVE SOLUTION~  TC: O(logn) SC: O(logn)

// class Solution {
// public:
//     double myPow(double x, long long n) {
//         // Exponentiation by Squaring~
//         if(n == 0) return 1;
//         if(n < 0) {
//             x = 1/x;
//             n *= -1;
//         }

//         if(n % 2 == 1) {
//             // power is odd~
//             return myPow(x*x, n/2)*x;
//         }

//         else{
//             // power is even~
//             return myPow(x*x, n/2);
//         }
//     }
// };

// ITERATIVE SOLUTION~ TC: O(logn) SC: O(1)
// class Solution {
// public:
//     double myPow(double x, int n) {
//         long long N = n;     // using long long cuz when n = INT_MIN, mulitplying with -1 gives overflow as (-2,147,483,648) to (2,147,483,647)
//         if(N < 0) {
//             x = 1/x;
//             N = -N;
//         }

//         double ans = 1;

//         while(N > 0) {
//             if(N % 2) ans *= x;

//             x *= x;
//             N = N >> 1;
//         }

//         return ans;
//     }
// };

