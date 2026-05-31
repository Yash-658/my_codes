// https://leetcode.com/problems/min-stack/

// O(n) without using any extra stack or memory (ENCODING VALUES)

// Intuition behind that formula::

// 1. we want to push something smaller (8) than current mini (10) that we just encountered over prevmini (12) . 
// (because we will identify them as encoded values when popping elements smaller than mini)

// 2. prevmini is greater than newmini (12 > 10) 

// say prevmini  = y and newmini  = x , and something smaller than x we want to push , say z (encoded value)
// so ... 
// x < y , therefore add x to both sidese
// 2x < y + x
// 2x - y < x
// something < x or say z < x

// class MinStack {
//     stack<long> s;
//     long min;

// public:
//     MinStack() { min = 0; }

//     void push(int val) {
//         if (s.empty()) {
//             s.push(val);
//             min = val;
//         }

//         else {
//             if (val < min) {
//                 s.push((long)2 * val -
//                        min); // 2*new_min - prev_min = new_value, here the
//                              // new_min is the actual value~
//                 min = val;
//             }

//             else {
//                 // this val won't change our minimum, so push it as it is
//                 s.push(val);
//             }
//         }
//     }

//     void pop() {
//         if (s.empty())
//             return;

//         if (s.top() < min) {
//             // this means it's an updated value, this means we gotta change our
//             // current minimum to the previous minimum~
//             int x = s.top();
//             s.pop();
//             min = 2 * min - x;
//         }

//         else {
//             s.pop();
//         }
//     }

//     int top() {
//         if (s.top() > min)
//             return s.top();
//         return int(min);
//     }

//     int getMin() { return int(min); }
// };

// By using stack<pair<int,int>>

// class MinStack {
// public:
//     stack<pair<int,int>> st;

//     MinStack() {
//     }
    
//     void push(int val) {
//         if(st.empty()) st.push(make_pair(val, val));
//         else st.push(make_pair(val, min(val, st.top().second)));
//     }
    
//     void pop() {
//         st.pop();
//     }
    
//     int top() {
//         return st.top().first;
//     }
    
//     int getMin() {
//         return st.top().second;
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */