// https://leetcode.com/problems/implement-stack-using-queues/description/

#include<queue>
using namespace std;

// IMPLEMENTED USING SINGLE QUEUE, most efficient~
class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {                     // O(n)
        int currSize = q.size();
        q.push(x);
        while(currSize) {
            q.push(q.front());
            q.pop();
            currSize--;
        }
    }
    
    int pop() {                            // O(1)
        int popped = q.front();
        q.pop();
        return popped;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

