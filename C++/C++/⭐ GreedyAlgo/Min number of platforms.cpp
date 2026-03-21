// https://takeuforward.org/plus/dsa/problems/minimum-number-of-platforms-required-for-a-railway?source=strivers-sde-sheet

// TC: O(nlogn) SC: O(n)

// struct comp{
//     public:
//     bool operator()(pair<int,int> a, pair<int,int> b) {
//         return a.first > b.first;
//     }
// };

// class Solution{
//     public:
//     int findPlatform(vector<int>& arr, vector<int>& dep){
//        priority_queue<pair<int,int>, vector<pair<int,int>>, comp> trains;
        
//         for(int i = 0; i < arr.size(); i++) {
//             trains.push({arr[i],dep[i]});
//         }
        
//         // now we have trains arr and dep in a sorted manner~
//         // just need to calculate at any particular time what's the min max platforms will be used~
        
//         int ans = 1;
        
//         priority_queue<int, vector<int>, greater<int>> currQ;

//         while(!trains.empty()) {
//             auto [currArr, currDep] = trains.top();
//             trains.pop();
            
//             if(currQ.empty()) {
//                 currQ.push(currDep);
//             }
            
//             else{
//                 while(!currQ.empty() && currQ.top() < currArr) {
//                     currQ.pop();
//                 }
                
//                 currQ.push(currDep);
//                 ans = max(ans, (int)currQ.size());
//             }
//         }
        
//         return ans;
        
//     }
// };

// OPTIMAL APPROACH: TC: O(nlogn) SC: O(1)
// Instead of pairing trains, treat:

// all arrivals as +1 platform needed
// all departures as -1 platform freed

// 👉 Then process them in time order

// int findPlatform(vector<int>& arr, vector<int>& dep) {
//     sort(arr.begin(), arr.end());
//     sort(dep.begin(), dep.end());

//     int i = 0, j = 0;
//     int platforms = 0, ans = 0;

//     while(i < arr.size()) {
//         if(arr[i] <= dep[j]) {                                // used <= as according to question if a train arrived at the same time one leaves, it will still need a new platform
//             platforms++;   // new train arrives
//             ans = max(ans, platforms);
//             i++;
//         }
//         else {
//             platforms--;   // train departs
//             j++;
//         }
//     }

//     return ans;
// }

// comp(a, b) = true means:
// “a should come after b” (a has lower priority)