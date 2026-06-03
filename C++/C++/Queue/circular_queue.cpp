// circular queue

// I can also make it work if I use a count variable too, so that it tracks how many elements are currently present in the queue, and i can update it whenever I pop or push, and when count == size, ie the queue is full, and if count ==0, is empty~

#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int value){
        // if full
        if((rear+1)%size == front) return false;

        // if it's the first element~
        if(front == -1) {
            front = rear = 0;
        }

        // edge case
        else if(rear == size-1) {
            rear = 0;
        }

        // normal case
        else{
            rear++;
        }

        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front == -1) return -1;

        int popped = arr[front];

        // single element
        if(front == rear) {
            front = rear = -1;            // resetting queue as its empty now~
        }

        // edge case
        else if(front == size-1) front = 0;

        // normal case
        else {
            front++;
        }
        
        return popped;
    }
};