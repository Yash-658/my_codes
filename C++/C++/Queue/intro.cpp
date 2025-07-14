#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;

// ADD MORE QUESTIONS TO THIS DIRECTORY WITH THE LOVE BABAR PLAYLIST, has soo much good questions~
// stl
// int main(){
//     queue<int> q;
//     q.push(5);
//     q.push(6);
//     q.push(7);
//     q.push(8);
//     q.push(9);

//     while(!q.empty()) {
//         cout<<q.front();
//         q.pop();
//     }
    
// return 0; 
// }


#include <bits/stdc++.h> 
class Queue {
    int *arr;
    int _front;
    int rear;

public:
    Queue() {
        arr = new int[5001];
        _front = 0;
        rear = 0;                               // you can also try to implement isempty()
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(_front == rear) return true;
        else return false;
    }

    void enqueue(int data) {
        arr[rear] = data;
        rear++;
    }

    int dequeue() {
        if(isEmpty()) return -1;

        int temp = arr[_front];    // to avoid memory wastage, now we will apply this concept that if the array becomes empty after popping an element,
        _front++;                  // that means front == rear, then we will make front = rear = 0 again.
        if(isEmpty()) {
            _front = 0;
            rear = 0;
        }
        return temp;
    }

    int front() {
        if(isEmpty()) return -1;
        return arr[_front];
    }
};
