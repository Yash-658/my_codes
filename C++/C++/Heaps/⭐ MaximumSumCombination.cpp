// https://www.geeksforgeeks.org/problems/maximum-sum-combination/1#expected-approach-using-sorting-heap-set-on-logn-time-and-on-space
// O(nlogn) O(k)

// vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
//         vector<int> result;
//         set<pair<int,int>> visited;
//         priority_queue<tuple<int,int,int>> maxHeap;
//         int n = a.size(), m = b.size();
        
//         sort(a.begin(), a.end(), greater<int>());
//         sort(b.begin(), b.end(), greater<int>());
        
//         maxHeap.push({a[0] + b[0], 0, 0});
//         visited.insert({0, 0});
        
//         while(k-- && !maxHeap.empty()) {
            
//             // remove curr max sum and store in result
//             auto [sum, i, j] = maxHeap.top();
//             maxHeap.pop();
//             result.push_back(sum);
            
//             // add neighbouring combinations into maxHeap if not done already and if they exist~
//             // also mark them as visited~
            
//             if(j+1 < m && !visited.count({i, j+1})) {
//                 maxHeap.push({a[i] + b[j+1], i, j+1});
//                 visited.insert({i, j+1});
//             }
            
//             if(i+1 < n && !visited.count({i+1, j})) {
//                 maxHeap.push({a[i+1] + b[j], i+1, j});
//                 visited.insert({i+1, j});
//             }
//         }
        
//         return result;
//     }