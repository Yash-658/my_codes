// https://leetcode.com/problems/find-median-from-data-stream/

// class MedianFinder {
// public:
//     priority_queue<int> maxHeap;
//     priority_queue<int, vector<int>, greater<int>> minHeap;

//     MedianFinder() {
//     }
    
//     void addNum(int num) {
//         if(maxHeap.empty()) {
//             maxHeap.push(num);
//             return;
//         }

//         // comparing values with top elements in both heaps~ 
//         int max = maxHeap.top();
        
//         if(maxHeap.size() == minHeap.size()) {
//             int min = minHeap.top();
//             if(max < num) {
//                 minHeap.pop();
//                 minHeap.push(num);
//                 maxHeap.push(min);
//             }

//             else{
//                 maxHeap.push(num);
//             }
//         }

//         else{
//             if(num <= max) {
//                 maxHeap.pop();
//                 maxHeap.push(num);
//                 minHeap.push(max);
//             }

//             else{
//                 minHeap.push(num);
//             }
//         }
//     }
    
//     double findMedian() {
//         double ans;
//         if(maxHeap.size() != minHeap.size()) {
//             ans = maxHeap.top();
//         }

//         else{
//             ans = (maxHeap.top() + minHeap.top()) / 2.0;
//         }

//         return ans;
//     }
// };

