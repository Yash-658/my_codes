// https://www.naukri.com/code360/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=SUBMISSION

// bool isPossible(int mid, const vector<int> &boards, int k) {
//     int sum = 0, painters = 1;

//     for(int i = 0; i < boards.size(); i++) {
        
//         if(sum + boards[i] <= mid) {
//             sum += boards[i];
//         }

//         else{
//             painters++;
//             if(painters > k) return false;
//             sum = boards[i];
//         }
//     }

//     return true;
// }

// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int mid, s = *max_element(boards.begin(), boards.end()), e = accumulate(boards.begin(), boards.end(), 0);

//     while(s < e) {
//         mid = s + (e-s)/2;

//         if(isPossible(mid, boards, k)) e = mid;
//         else s = mid+1;
//     }

//     return s;
// }