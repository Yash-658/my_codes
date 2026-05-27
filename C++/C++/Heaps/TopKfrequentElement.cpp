// https://leetcode.com/problems/top-k-frequent-elements/description/

// CAN ALSO BE DONE THRU BUCKET SORT O(n) O(n), check it once

// Let:
// n = total numbers in array
// m = unique numbers
// k = top frequent elements needed

// O(n+mlogk)   O(n log k)

// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         vector<int> ans;
//         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
//         unordered_map<int, int> freq;

//         for(int i: nums) {
//             freq[i]++;
//         }

//         for(auto [num, frequency]: freq) {
//             if(minHeap.size() < k) minHeap.push({frequency,num});
//             else if(minHeap.top().first < frequency) {
//                 minHeap.pop();
//                 minHeap.push({frequency,num});
//             }
//         }

//         while(!minHeap.empty()) {
//             ans.push_back(minHeap.top().second);
//             minHeap.pop();
//         }

//         return ans;
//     }
// };