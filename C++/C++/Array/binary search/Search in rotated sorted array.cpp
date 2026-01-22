// https://leetcode.com/problems/search-in-rotated-sorted-array/description/
#include<vector>
using namespace std;

class Solution {
public:
// key point: when we choose any index in a rotated array, there's one side which is sorted and one side which isn't(this side also contains the pivot element, so we need to decrease the search space according to this)
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