// https://www.naukri.com/code360/problems/ayush-and-ninja-test_1097574?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=SUBMISSION

#include<vector>
#include<utility>
#include <bits/stdc++.h> 

// bool possible(long long mid, int days, int chapters, const vector<int> &time) {
// 	long long sum = 0;
// 	int currDay = 1;
// 	for(int i = 0; i < chapters; i++) {
// 		if(time[i] > mid) return false;

// 		else if(sum + time[i] > mid) {
// 			currDay++;
// 			sum = time[i];
// 		}

// 		else {
// 			sum += time[i];
// 		}
// 	}

// 	if(currDay > days) {
// 		// not possible
// 		return false;
// 	}

// 	return true;
// }

// long long ayushGivesNinjatest(int n, int m, vector<int> time) 
// {	
// 	long long mid, s = 1, e = accumulate(time.begin(), time.end(), 0LL);

// 	while(s < e) {
// 		mid = (s+e)/2;

// 		if(possible(mid, n, m, time)) {
// 			// this is a possible answer~
// 			e = mid;
// 		}

// 		else {
// 			s = mid+1;
// 		}
// 	}

// 	return s;
// }

