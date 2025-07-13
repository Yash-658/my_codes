

// THIS IS BRUTE FORCE, hr station ke liye check krenge if it's valid, TC- O(n^2)

// class Solution {
//   public:
//     int startStation(vector<int> &gas, vector<int> &cost) {
//         int n = gas.size();

//         for(int i = 0; i < n; i++) {
//             int curr_fuel = 0;
//             for(int j = 0; j < n; j++) {
//                 int indx = (i+j)%n;
//                 curr_fuel += gas[indx];
//                 curr_fuel -= cost[indx];
                
//                 // check if not enough~
//                 if(curr_fuel < 0) {
//                     // not enough
//                     break;
//                 }
//             }
            
//             // check if curr_fuel is >= 0
//             if(curr_fuel >= 0) return i;
//         }
        
//         return -1;
//     }
// };



//     Optimized approach~
//     1. If total gas < total cost, you can never complete the circle.
//     2. Once you've ruled out a block of stations as invalid starting points (because cumulative fuel became negative), you don’t need to check them again — any path from them to i already failed.

// class Solution {
//   public:
    
//     int startStation(vector<int> &gas, vector<int> &cost) {
//         int total_gas = 0, total_cost = 0;
//         int start = 0, curr_fuel = 0;
        
//         for(int i = 0; i < gas.size(); i++) {
//             total_gas += gas[i];
//             total_cost += cost[i];
            
//             curr_fuel += gas[i]-cost[i];
            
//             // check if this station is not valid~
//             if(curr_fuel < 0) {
//                 // not valid
//                 start = i+1;
//                 curr_fuel = 0;
//             }
//         }
        
//         return (total_gas < total_cost) ? -1: start;
//     };