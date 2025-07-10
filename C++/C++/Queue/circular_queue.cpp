// circular queue


#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    bool is_full;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = 0;
        rear = 0;
        is_full = false;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        if(is_full) return false;

        arr[rear] = value;
        rear = (rear+1) % size;
        
        // now check if rear == front, cuz if it is, the queue is full~
        if(rear == front) is_full = true;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front == rear && !is_full) {
            // this means it's empty
            return -1;
        }

        if(is_full == true) is_full = false;

        int temp = arr[front];
        front = (front+1) % size;
        return temp;
    }
};