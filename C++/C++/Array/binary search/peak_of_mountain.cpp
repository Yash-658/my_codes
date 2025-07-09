#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr)
    {
        int s=0, l=(size(arr)-1);   
        while (1)
        {
            int mid = (s+l)/2;
            if(arr[mid]>arr[mid+1] && arr[mid-1]<arr[mid])
            {
                return mid;
            }

            else if (arr[mid]<arr[mid+1])
            {
                s = (mid+1);
            }

            else
            { 
                l = (mid-1);
            }    
        }
    }
};