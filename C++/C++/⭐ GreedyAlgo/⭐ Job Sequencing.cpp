// https://www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1
 
// O(n^2) O(n)

// class Solution {
//   public:
//     vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
//         vector<pair<int,int>> sJobs;    // sortef acc to max profit
//         unordered_set<int> slotsTaken;
//         int maxProfit = 0;

//         for(int i = 0; i < deadline.size(); i++) {
//             sJobs.push_back({profit[i], deadline[i]});
//         }

//         sort(sJobs.begin(), sJobs.end(), greater<pair<int,int>>());

//         for(const auto &currJob : sJobs) {
//             auto [currProfit, currDL] = currJob;

//             // try to allocate this job into a free slot of time & try to do it as late as possible~
//             for(int i = currDL; i > 0; i--) {
//                 if(slotsTaken.count(i) == 0) {
//                     slotsTaken.insert(i);
//                     maxProfit += currProfit;
//                     break;
//                 }
//             }
//         }
        
//         return {slotsTaken.size(), maxProfit};
//     } 
// };

// OPTIMISED VERSION WITH ORDERED_SET and upperbound~ O(nlogn) O(n)

// upper_bound(x) → next bigger element
// --it → step back → best valid slot

// vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
//         vector<pair<int,int>> sJobs;    // sortef acc to max profit
//         int maxProfit = 0, maxDL = 0;

//         for(int i = 0; i < deadline.size(); i++) {
//             sJobs.push_back({profit[i], deadline[i]});
//             maxDL = max(maxDL, deadline[i]);
//         }
        
//         sort(sJobs.begin(), sJobs.end(), greater<pair<int,int>>());

//         set<int> freeSlots;
//         for(int i = 1; i <= maxDL; i++) {
//             freeSlots.insert(i);
//         }
        
//         for(const auto &currJob : sJobs) {
//             auto [currProfit, currDL] = currJob;

//             // try to allocate this job into a free slot of time & try to do it as late as possible~
//             auto it = freeSlots.upper_bound(currDL);        // O(logn), this is a number just greater than currDL
            
//             if(it == freeSlots.begin()) continue;
//             --it;     // now it <= currDL   this is currDl if available or a slot just below it 
            
//             freeSlots.erase(it);
//             maxProfit += currProfit;
//         }
        
//         return {maxDL - freeSlots.size(), maxProfit};
//     } 