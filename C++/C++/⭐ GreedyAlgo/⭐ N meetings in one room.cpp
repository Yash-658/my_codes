// https://takeuforward.org/plus/dsa/problems/n-meetings-in-one-room?source=strivers-sde-sheet

// This is a classic Greedy Algorithm pattern:
// “Make the locally optimal choice (earliest finishing meeting) → leads to global optimum.”

// TC: O(N logN) SC: O(N)
// can also use minHeap here with a custom comparator~

// class Solution{
//     public:

//     // we made a ans vector just in case it asked for the order of the meetings
//     int maxMeetings(vector<int>& start, vector<int>& end){
//         vector<pair<pair<int, int>, int>> meetings;    // {end, start} , index
//         vector<int> ans;

//         for(int i = 0; i < start.size(); i++) {  
//             meetings.push_back({{end[i], start[i]}, i+1});
//         }

//         sort(meetings.begin(), meetings.end());  // sort according to the earliest endTime

//         int freeTime = meetings[0].first.first;  // cuz the meeting with the earliest finish time will always be conducted~
//         ans.push_back(meetings[0].second);

//         for(int i = 1; i < meetings.size(); i++) {
//             if(meetings[i].first.second > freeTime) {
//                 ans.push_back(meetings[i].second);
//                 freeTime = meetings[i].first.first;
//             }
//         }

//         return ans.size();
//     }
// };