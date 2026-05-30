// https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION

// void insertAtBottom(stack<int> &s, int elem) {
//     if(s.empty()) {
//         s.push(elem);
//         return;
//     }

//     int top = s.top();
//     s.pop();
//     insertAtBottom(s, elem);
//     s.push(top);
// }

// void reverseStack(stack<int> &stack) {
//     if(stack.empty()) {
//         return;
//     }

//     int top = stack.top();
//     stack.pop();

//     reverseStack(stack);
//     insertAtBottom(stack, top);
// }

