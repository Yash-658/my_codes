// course schedule 1 mai bs ye btana tha ki saare courses kr payenge ki nhi, i.e if a cycle exists, we won't be able to
// ye hai course schedule 2: https://leetcode.com/problems/course-schedule-ii/

// class Solution {
// public:
//     vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
//         vector<vector<int>> adj(numCourses);
//         vector<int> Order, inDegree(numCourses, 0);

//         for(const auto edge: prerequisites) {
//             inDegree[edge[0]]++;
//             adj[edge[1]].push_back(edge[0]);
//         }

//         // now push all courses with no prerequistes(i.e 0 indegree) into the queue
//         queue<int> q;
//         for(int i = 0; i < numCourses; i++) {
//             if(inDegree[i] == 0) q.push(i);
//         }

//         while(!q.empty()) {
//             int temp = q.front();
//             q.pop();

//             Order.push_back(temp);
//             for(int it: adj[temp]) {
//                 inDegree[it]--;
//                 if(inDegree[it] == 0) q.push(it);
//             }
//         }

//         if(numCourses > Order.size()) return {};
//         return Order;
//     }
// };