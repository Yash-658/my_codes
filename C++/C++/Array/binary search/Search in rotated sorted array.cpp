// https://leetcode.com/problems/search-in-rotated-sorted-array/description/

// In a rotated sorted array, the entire array is no longer fully sorted ,
// but an important property still holds: in every part of the array you look at, one side will always be sorted. 
// This means either the left portion or the right portion of the array will be in increasing order. 
// That’s the key idea we use to find the target efficiently.

#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int mid, s = 0, l = arr.size()-1;
        
        while(s<=l) {
            mid = (s+l)/2;

            if(arr[mid] == target) return mid;

            else if(arr[mid] >= arr[s]) {
                // left side sorted hai 
                if(arr[s] <= target && arr[mid] > target) {
                    l = mid-1;
                }

                else{
                    s = mid+1;
                }
            }

            else{
                //right side sorted hai 
                if(arr[mid] < target && arr[l] >= target) {
                    s = mid+1;
                }

                else{
                    l = mid-1;
                }
            }
        }

        return -1;
    }
};