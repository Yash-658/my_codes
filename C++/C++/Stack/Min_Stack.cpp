// https://youtu.be/NdDIaH91P0g?si=lVecZ1CH_RjetbiL
// to implement a stack with getMin() fxn

// leetcode - https://leetcode.com/problems/min-stack/

/* most space and time optimised~

class MinStack {
    stack<long> s;
    long min;
    public:
    MinStack() {
        min = 0;
    }
    
    void push(int val) {
        if(s.empty()) {
            s.push(val);
            min = val;
        }

        else{
            if(val < min) {
                s.push((long)2*val - min);              // 2*new_min - prev_min = new_value, here the new_min is the actual value~
                min = val;
            }

            else {
                // this val won't change our minimum, so push it as it is
                s.push(val);
            }
        }
    }
    
    void pop() {
        if(s.empty()) return;

        if(s.top() < min) {
            // this means it's an updated value, this means we gotta change our current minimum to the previous minimum~
            int x = s.top();
            s.pop();
            min = 2*min-x;
        }

        else {
            s.pop();
        }
    }
    
    int top() {
        if(s.top() > min) return s.top();
        return int(min);
    }
    
    int getMin() {
        return int(min);
    }   
};

/*
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
*/