// https://www.naukri.com/code360/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM

// TC = O(nlogn)

// bool isPossible(int mid, const vector<int> &stalls, int k) {
//     // the first cow will always be placed at the first element~

//     int prv = stalls[0], remaining = k-1;

//     for(int i = 1; i < stalls.size(); i++) {
//         if((stalls[i] - prv) >= mid) {
//             remaining--;
//             prv = stalls[i];
//         }
//     }

//     if(remaining <= 0) return true;
//     return false;
// }

// int aggressiveCows(vector<int> &stalls, int k)
// {
//     sort(stalls.begin(), stalls.end());         // imp observation~
//     int ans, mid, s = 1, e = stalls.back() - stalls.front();

//     while(s<=e) {
//         mid = s + (e-s)/2;

//         if(isPossible(mid, stalls, k)) {
//             ans = mid;
//             s = mid+1;
//         }

//         else e = mid-1;
//     }
//     return ans;
// }