// https://leetcode.com/problems/repeated-string-match/description/


// ⭐ RABIN KARP ALGO~ (rolling hash function) 
// basic idea is apn string ko hash function se ek integer key mai convert krdeta hai
// and phir, ex: a = abcdc b = cdc, then 'abc'dc -> a'bcd'a -> ab'cdc', so O(1) mai next window ki hash value calculate hojayegi~
// check this -> https://youtu.be/qQ8vS2btsxI?si=DWx821gwwtTW-wqr&t=885

// YE IMPLEMENT NHI HUA HAI, IT WAS TOO BUGGY, TRY AGAIN LATER

// OBSERV1: this can give false positive but we will never skip an actual match with this algo~
// class Solution {
// public:

//     bool rabinKarp(string a, string b) {
//         int n = a.size(), m = b.size();
//         int p = 31, mod = 1e9+7;
//         long long patternVal = 0;
//         vector<long long> pow(m);
//         pow[0] = 1;
//         // make pow array and pattern value of b~
//         for(int i = 1; i < m; i++) {
//             pow[i] = (pow[i-1]*p)%mod;
//             long long contri = ((b[i]-'a'+1)*pow[m-i-1])%mod;
//             patternVal = (patternVal+contri)%mod;
//         }

//         patternVal += ((b[0]-'a'+1)*pow[m-1]);
//         patternVal %= mod;

//         // now rolling hash on a~
//         // first initilaise the window
//         long long windowVal = 0;
//         for(int i = 0; i < m; i++) {
//             long long contri= ((a[i]-'a'+1)*pow[m-(i+1)])%mod;
//             windowVal = (windowVal+contri)%mod;
//         }

//         if(patternVal == windowVal) {
//             bool match = true;
//             for(int i = 0; i < m; i++) {
//                 if(a[i] != b[i]) {
//                     match = false;
//                     break;
//                 }
//             }
//             if(match) return true;
//         }

//         // roll the window for the rest~
//         for(int i = m; i < n; i++) {
//             long long contri = (a[i]-'a')+1;
//             long long deduct = ((a[i-m]-'a'+1)*pow[m-1])%mod;
//             windowVal = ((windowVal-deduct)+mod)%mod;
//             windowVal = (windowVal*p)%mod;
//             windowVal = (windowVal+contri)%mod;

//             if(patternVal == windowVal) {
//                 // check if matches
//                 bool match = true;
//                 int start = i-m+1;
//                 for(int j = 0; j < m; j++) {
//                     if(a[start+j] != b[j]) {
//                         match = false;
//                         break;
//                     }
//                 }
//                 if(match) return true;
//             }
//         }

//         return false;
//     }

//     int repeatedStringMatch(string a, string b) {
//         int n = a.size(), m = b.size();
//         int ans = (m+n-1)/n;

//         string temp = a;
//         for(int i = 1; i < ans; i++) {
//             a += temp;
//         }
//         // check if b is a substr~
//         if(rabinKarp(a, b)) return ans;

//         // increase repetation~
//         ans += 1;
//         a += temp;
//         // now check if b is a substr~
//         if(rabinKarp(a, b)) return ans;
//         return -1;
//     }
// };

// Brute Force O(n*m) O(1)
// class Solution {
// public:
//     int repeatedStringMatch(string a, string b) {
//         double n = a.size(), m = b.size();
//         int ans = ceil(m/n);      // if a divides b perfectly, it will give the quotient, and if any remainder, it will +1

//         string temp = a;
//         for(int i = 1; i < ans; i++) {
//             a += temp;
//         }
//         n = a.size();
//         // check if b is a substr~
//         int i = 0; 
//         while(i < n) {
//             if(a[i] == b[0]) {
//                 int start = i;
//                 int j = 0;
//                 while(i < n && j < m) {
//                     if(a[i] != b[j]) {
//                         break;
//                     }
//                     i++; j++;
//                 }
//                 if(j == m) return ans;
//                 i = start;
//             }
//             i++;
//         }

//         // increase repetation~
//         ans += 1;
//         a += temp;
//         n = a.size();
//         i = 0;
//         while(i < n) {
//             if(a[i] == b[0]) {
//                 int start = i;
//                 int j = 0;
//                 while(i < n && j < m) {
//                     if(a[i] != b[j]) {
//                         break;
//                     }
//                     i++; j++;
//                 }
//                 if(j == m) return ans;
//                 i = start;
//             }
//             i++;
//         }

//         return -1;
//     }
// };