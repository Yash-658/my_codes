#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {     // hmesha peak ke liye (mid+1) check krna 
        int s=1, l=(size(arr)-2);   
        while(s<l)
        {
            int mid = (s+l)/2;

            if (arr[mid]<arr[mid+1])
            {
                s = (mid+1);
            }

            else
            { 
                l = mid;
            }    
        }
        return s;
    }
};