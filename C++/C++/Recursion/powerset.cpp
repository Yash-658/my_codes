#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// By recursion, for every index there are two options, either include it or exclude it~ O(n*2^n) O(2^n)

class Solution {
public:
    void solve(const vector<int>& nums, vector<int> output, int index, vector<vector<int>> &ans) 
    {
        // base case
        if(index >= nums.size()) {
            ans.push_back(output);
            return;
        }

        // on excluding index
        solve(nums,output,index+1,ans);

        // on including index
        output.push_back(nums[index]);
        solve(nums,output,index+1,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums,output,0,ans);
        return ans;
    }
};

// By bit manipulation   O(2^n) O(2^n)
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        for(int mask = 0; mask < (1 << n); mask++) {
            vector<int> subset;

            for(int j = 0; j < n; j++) {
                // check if j-th bit of mask is set (1) → include nums[j]
                if(mask & (1 << j)) {
                    subset.push_back(nums[j]);
                }
            }

            ans.push_back(subset);
        }

        return ans;
    }
};