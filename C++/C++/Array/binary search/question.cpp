#include<iostream>                                  //https://www.spoj.com/problems/EKO/ = question link
#include<string>
#include<vector>
#include <climits>

using namespace std;

bool is_satisfy(int m, vector <int> arr, int mid)
{
    int wood_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(mid<arr[i])
        {
            wood_sum += (arr[i]-mid);
        }
    }

    return (wood_sum >= m);
}

int max_height_allowed(int n, int m, vector <int> heights)
{
    int s = -1, e = INT_MIN, mid, ans;
    for (int i = 0; i < n; i++)
    {
        s = min(s,heights[i]);
        e = max(e,heights[i]);
    }

    while (s<=e)
    {
        mid = s+(e-s)/2;

        if(is_satisfy(m , heights, mid))
        {
            ans = mid;
            s = (mid+1);
        }

        else
        {
            e = (mid-1);
        }
    }
    return ans;
}

int main()
{
    vector <int> arr = {4, 42, 40, 26, 46};
    cout<<max_height_allowed(5, 20, arr);
    return 0;
}
