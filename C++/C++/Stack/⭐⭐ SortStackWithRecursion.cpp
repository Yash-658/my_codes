// https://www.naukri.com/code360/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM

// we basiclaly used insertion sort here~

// #include <bits/stdc++.h> 

// void sortedInsert(stack<int> &stack, int element) {
//     if(stack.empty() || stack.top() <= element) {
//         stack.push(element);
//         return;
//     }

//     int top = stack.top();
//     stack.pop();
//     sortedInsert(stack, element);
//     stack.push(top);
// }   

// void sortStack(stack<int> &stack)
// {
//     if(stack.empty()) return;

// 	int top = stack.top();
//     stack.pop();

//     sortStack(stack);
//     sortedInsert(stack, top);
// }