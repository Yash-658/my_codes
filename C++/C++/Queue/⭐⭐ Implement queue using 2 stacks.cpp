// https://leetcode.com/problems/implement-queue-using-stacks/

// TC of pop and peek
// Worst case: O(n)
// Amortized: O(1) 


// class MyQueue {
// public:
//     stack<int> st1;
//     stack<int> st2;
//     MyQueue() {
//     }
    
//     void push(int x) {
//         st1.push(x);
//     }
    
//     int pop() {
//         if(st2.empty()) {
//             // do something
//             while(!st1.empty()) {
//                 st2.push(st1.top());
//                 st1.pop();
//             }
//         }

//         int top = st2.top();
//         st2.pop();
//         return top;
//     }
    
//     int peek() {
//         if(st2.empty()) {
//             // do something
//             while(!st1.empty()) {
//                 st2.push(st1.top());
//                 st1.pop();
//             }
//         }

//         return st2.top();
//     }
    
//     bool empty() {
//         if(st1.empty() && st2.empty()) return true;
//         else return false;
//     }
// };

