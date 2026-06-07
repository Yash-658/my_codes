// https://leetcode.com/problems/string-to-integer-atoi/

// IMPLEMENTATION HEAVY~ (TOOK A LOT O DEBUGGING), 
// instead of counting digits and using array, there's another way to process the number left to right 
// left-to-right accumulation approach: (done it in the last code here~)
// ans = ans * 10 + digit;

// O(n) O(1)

// class Solution {
// public:
//     int myAtoi(string s) {
//         long ans = 0, i = 0, n = s.size();
//         static long pow[10] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
//         // first remove any redundant char~
//         while(i < n && s[i] == ' ') {
//             i++;
//         }

//         // check if any sign present~
//         bool isNeg = false;
//         if(i < n && s[i] == '-') {
//             isNeg = true;
//             i++;
//         }

//         else if(i < n && s[i] =='+') i++;

//         // remove any leading zeroes~
//         while(i < n && s[i] == '0') {
//             i++;
//         }

//         // possible: "0000 and" or "0-1" we should return 0
//         if(i == n) return 0;
//         if(!isdigit(s[i])) return 0;

//         // count digits of number~
//         int start = i, digit = 0;
//         while(i < n && isdigit(s[i])) {
//             digit++; 
//             i++;
//         }

//         i = start;
//         // convert the number into a valid int~
//         for(int exp = digit-1; exp >= 0; exp--) {               // exp = pow of 10~
//             if(isNeg && (exp > 9 || ans + (s[i]-'0')*pow[exp] > 1LL*INT_MIN*(-1))) {
//                 return INT_MIN;
//             }

//             if(!isNeg && (exp > 9 || ans + (s[i]-'0')*pow[exp] > INT_MAX)) {
//                 return INT_MAX;
//             }

//             ans += (s[i]-'0')*pow[exp];
//             i++;
//         } 
//         ans = (int) ans;
//         if(isNeg) ans *= -1;
//         return ans;
//     }
// };

// class Solution {
// public:
//     int myAtoi(string s) {
//         int ans = 0, i = 0, n = s.size();
//         // first remove any redundant char~
//         while(i < n && s[i] == ' ') {
//             i++;
//         }

//         // check if any sign present~
//         bool isNeg = false;
//         if(i < n && s[i] == '-') {
//             isNeg = true;
//             i++;
//         }

//         else if(i < n && s[i] =='+') i++;

//         // remove any leading zeroes~
//         while(i < n && s[i] == '0') {
//             i++;
//         }

//         // possible: "0000 and" or "0-1" we should return 0
//         if(i == n) return 0;
//         if(!isdigit(s[i])) return 0;

//         // convert the number into a valid int~
//         while(i < n && isdigit(s[i])) {
//             int currDigit = s[i] - '0';
//             if(isNeg && 1LL*ans*10 + currDigit >= 1LL*INT_MIN*(-1)) {
//                 return INT_MIN;
//             }

//             if(!isNeg && 1LL*ans*10 + currDigit >= INT_MAX) {
//                 return INT_MAX;
//             }

//             ans = ans*10 + currDigit;
//             i++;
//         } 

//         if(isNeg) ans *= -1;
//         return ans;
//     }
// };