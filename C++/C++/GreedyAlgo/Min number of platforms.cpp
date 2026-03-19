// https://takeuforward.org/plus/dsa/problems/minimum-number-of-platforms-required-for-a-railway?source=strivers-sde-sheet

// TC: O(n2) SC: O(1)  as we are using a loop to check which platform is free everytime~

// class Solution{
//     public:
//     int findPlatform(vector<int>& Arrival, vector<int>& Departure){
//         vector<int> platforms;   // its size will tell us how many platforms and its values will tell us each platform's freeTime~

//         platforms.push_back(-1);   // as first platform will always be free at the starting

//         for(int i = 0; i < Arrival.size(); i++) {
//             bool allocated = false;
//             for(int &freeTime: platforms) {
//                 if(freeTime < Arrival[i]) {
//                     allocated = true;
//                     freeTime = Departure[i];    // update freeTime of this platform~
//                     break;
//                 }
//             }

//             // if not allocated still, create a new platform and allocate it their~
//             if(!allocated) platforms.push_back(Departure[i]);
//         }

//         return platforms.size();
//     }
// };

// OPTIMAL APPROACH: TC: O(nlogn) SC: O(n)
// instead of a vector, if we used a minHeap, we could directly tell the platform which is going to be available the earliest, and if we need to create a new one~
