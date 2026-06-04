// https://www.geeksforgeeks.org/problems/implement-k-queues-in-a-single-array/1

// class kQueues {
//     int *arr;
//     int *front;
//     int *tail;
//     int *next;   // free cum next arr, when no element on 'i', it will act as free, else as next
//     int nextFree;
//   public:
//     kQueues(int n, int k) {
//         arr = new int[n];
//         next = new int[n];
//         front = new int[k];
//         tail = new int[k];
//         nextFree = 0;
        
//         for(int i = 0; i < n; i++) {
//             if(i < k) {
//                 front[i] = -1;
//                 tail[i] = -1;
//             }
            
//             next[i] = i+1;
//         }
        
//         next[n-1] = -1;
//     }

//     void enqueue(int x, int i) {
//         // enqueue element x into queue i
//         if(isFull()) return;
        
//         if(isEmpty(i)) {
//             // first elem~
//             front[i] = nextFree;
//         }
        
//         else {
//             // connect with rest of the queue
//             next[tail[i]] = nextFree;
//         }
        
//         arr[nextFree] = x;
//         tail[i] = nextFree;
//         nextFree = next[nextFree];
//         next[tail[i]] = -1;
//     }

//     int dequeue(int i) {
//         if(isEmpty(i)) return -1;
//         int popped = front[i];
        
//         if(next[front[i]] == -1) {
//             // that means single element is being popped~
//             front[i] = tail[i] = -1;
//         }
        
//         else{
//             front[i] = next[popped];
//         }
        
//         next[popped] = nextFree;
//         nextFree = popped;
        
//         return arr[popped];
//     }

//     bool isEmpty(int i) {
//         // check if queue i is empty
//         if(front[i] == -1) return true;
//         else return false;
//     }

//     bool isFull() {
//         // check if array is full
//         if(nextFree == -1) return true;
//         else return false;
//     }
// };
