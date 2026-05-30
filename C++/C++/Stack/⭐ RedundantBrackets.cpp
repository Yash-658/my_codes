// https://www.naukri.com/code360/problems/redundant-brackets_975473?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM

// O(n) O(n)

// #include <bits/stdc++.h> 
// bool findRedundantBrackets(string &s)
// {
//     stack<char> st;

//     for(char ch: s) {
//         if(st.empty()) {
//             if(ch == ')') return true;
//             else if(ch == '(') st.push(ch);
//         }

//         else{
//             if(ch != ')') st.push(ch);
//             else{
//                 bool hasOp = false;
//                 while(!st.empty() && st.top() != '(') {
//                     char top = st.top();
//                     if(top == '+' || top == '-' || top == '*' || top == '/') hasOp = true; // for a valid exp, one operator is necessary
//                     st.pop();
//                 }

//                 if(st.empty()) return true;  // as no '(' for this ')' came~
//                 if(hasOp) st.pop();        // as its a valid exp, remove one '('
//                 else return true;
//             }
//         }
//     }

//     if(st.empty()) return false;
//     return true;
// }
