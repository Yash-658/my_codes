// TC - O(n) and SC = O(2k)

// #include <bits/stdc++.h> 
// long long sumOfMaxAndMin(vector<int> &nums, int n, int k) {
// 	deque<int> min;
//     deque<int> max;

//     long long ans = 0;

//     // for first window~
//     for(int i = 0; i < k; i++) {
//         int curr = nums[i];
//         while(!max.empty() && curr > nums[max.back()]) max.pop_back();
//         while(!min.empty() && curr < nums[min.back()]) min.pop_back();

//         max.push_back(i);
//         min.push_back(i);
//     }

//     // store the ans~
//     ans += nums[max.front()] + nums[min.front()];

//     // rest of the window~
//     for(int i = k; i < n; i++) {
//         int curr = nums[i];

//         // remove out of bounds element~
//         if(max.front() <= i-k) max.pop_front();
//         if(min.front() <= i-k) min.pop_front();

//         // now place the current element~
//         while(!max.empty() && curr > nums[max.back()]) max.pop_back();
//         while(!min.empty() && curr < nums[min.back()]) min.pop_back();

//         max.push_back(i);
//         min.push_back(i);

//         ans += nums[max.front()] + nums[min.front()];
//     }

//     return ans;
// }

