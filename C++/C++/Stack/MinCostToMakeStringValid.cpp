// https://www.naukri.com/code360/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=

// This is using stack, O(n) O (n), IT CAN BE OPTIMIZED BY JUST USING TWO POINTERS FOR SC: O(1)

// #include <bits/stdc++.h> 
// int findMinimumCost(string str) {
//   if(str.length()%2 == 1) return -1;

//   // now we know it can be converted into a valid string~
//   int cost = 0;
//   stack<int> st;

//   for(char ch: str) {
//     if(ch == '{') {
//       st.push(ch);
//     }

//     else if( ch == '}' && st.empty()) {  // if empty and } comes, we know we will always have to swap it to make str valid
//       cost++;      
//       st.push('{');
//     }

//     else {   // ch == '}' and !st.empty(), so now balance brackets 
//       st.pop();  // cuz we already know stack definetly has '{' at the top 
//     } 
//   }

//   // now stack only has even number of '{', so cost would be "size/2" to make str valid~
//   cost += st.size()/2;
//   return cost;
// }

// ⭐⭐⭐ OPTIMIZED SC: O(1)

// #include <bits/stdc++.h> 
// int findMinimumCost(string str) {
//   if(str.length()%2 == 1) return -1;

//   // SC: O(1)
//   // now we know it can be converted into a valid string~
//   int cost = 0, freq = 0;    // freq will tell number of '{' available to us~

//   for(char ch: str) {
//     if(ch == '{') {
//       freq++;
//     }

//     else if( ch == '}' && freq == 0) {  // if empty and } comes, we know we will always have to swap it to make str valid
//       cost++;      
//       freq++;
//     }

//     else {   // ch == '}' and !empty, so now balance brackets 
//       freq--;  // cuz we already know stack definetly has '{' at the top 
//     } 
//   }

//   // now stack only has even number of '{', so cost would be "size/2" to make str valid~
//   cost += freq/2;
//   return cost;
// }