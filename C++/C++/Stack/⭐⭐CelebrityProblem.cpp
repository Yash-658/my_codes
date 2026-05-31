// https://www.geeksforgeeks.org/problems/the-celebrity-problem/1

// MOST OPTIMAL O(n) O(1) TWO POINTER SOLUTION~

// class Solution {
//   public:
//     int celebrity(vector<vector<int> >& mat) {
//         int n = mat.size();
//         int top = 0;
//         int bottom = n-1;
        
//         while(top < bottom) {
//             if(mat[top][bottom] == 1) {
//                 top++;
//             }
            
//             else if(mat[bottom][top] == 1) {
//                 bottom--;
//             }
            
//             else {
//                 top++;
//                 bottom--;
//             }
//         }
        
//         if(top > bottom) return -1;
//         else {
//             // top == bottom, potential canditate
//             for(int i = 0; i < n; i++) {
//                 if(top == i) continue;
//                 if(mat[top][i] == 1) return -1;
//                 if(mat[i][top] == 0) return -1;
//             }
//         }
        
//         return top;
//     }
// };

// O(n) O(n) Stack Solution~
// Imagine all n people are initially possible celebrities.
// Take any two people A and B.

// If A knows B, eliminate A.
// Otherwise, eliminate B.
// After this comparison, one person is guaranteed not to be the celebrity, so you only need to keep the other one as a candidate.
// Keep repeating this process, and after n-1 eliminations you'll be left with exactly one candidate.

// class Solution {
//   public:
//     int celebrity(vector<vector<int>>& mat) { // O(3n) O(n)
//         stack<int> people;
//         int n = mat.size();
        
//         for(int i = 0 ; i < n; i++) {
//             people.push(i);
//         }
        
//         while(people.size() != 1) {  // n-1 operations
//             int p1 = people.top();
//             people.pop();
//             int p2 = people.top();
//             people.pop();
//             if(mat[p1][p2]) {  // if p1 knows p2, p1 is eliminated, else p2 is eliminated~
//                 people.push(p2);
//             }
//             else {
//                 people.push(p1);
//             }
//         }
        
//         int possibleCeleb = people.top();
//         // check if celeb~ (2n operations)
//         for(int i = 0; i < n; i++) {
//             if(i == possibleCeleb) continue;
//             if(mat[possibleCeleb][i]) return -1;
//             if(!mat[i][possibleCeleb]) return -1;
//         }
        
//         return possibleCeleb;
//     }
// };