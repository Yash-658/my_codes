#include<iostream>
#include<string>
#include<vector>
using namespace std;

int first_occur(vector<int>& nums, int target)
{
    int s = 0, l = nums.size()-1, first = -1, mid;
    while(s<=l)
    {
        mid = (l+s)/2;
        if(nums[mid]==target)
        {
            first = mid;
            l = (mid-1);
        }
        else if(nums[mid]>target)
        {
            l = (mid-1);
        }
        else
        {
            s = (mid+1);
        }
    }
    return first;

}

int last_occur(vector<int>& nums, int target)
{
    int s = 0, l = nums.size()-1, last = -1, mid;
    while(s<=l)
    {
        mid = (l+s)/2;
        if(nums[mid]==target)
        {
            last = mid;
            s = (mid+1);
        }
        else if(nums[mid]>target)
        {
            l = (mid-1);
        }
        else
        {
            s = (mid+1);
        }
    }
    return last;

}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int> ans;
        ans.push_back(first_occur(nums, target));
        ans.push_back(last_occur(nums, target));
        return ans;
    }
};