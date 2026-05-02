/*
Whenever we have been given to find position of any kth element then mostly we use priority queue/ heap
i.e to find kth smallest element use maxHeap & to find kth largest element we use minHeap.

class Solution {
public:
    // THIS RESULTS IN TC: O(nlogK) and SC: O(K)
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;

        // shuru ke "k" elements daal lo~
        for(int i = 0; i < k; i++) {
            minHeap.push(nums[i]);
        }

        // agr nums[i] bda hai current top se, that means it's a potential element in "k" largest elements,
        // and if thats the case jo current minm hai vo belong nhi krta yha~

        for(int i = k; i < nums.size(); i++) {
            if(nums[i] > minHeap.top()) {
                minHeap.pop();
                minHeap.push(nums[i]);
            }
        }

        return minHeap.top();
    }
};

OR
    // SAME APPROACH JUST DIfferent way of writing
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
         for(int num : nums) {
            minHeap.push(num);
            if(minHeap.size() > k) {
                minHeap.pop();
            }
        }
        return minHeap.top();
    }

*/