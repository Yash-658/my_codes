#include<iostream>                                                    //https://youtu.be/6z2HK4o8qcU?t=218
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {5, 8, 10, 17, 1, 3, 4};
    int mid, s = 0, l = (arr.size()-1);
    while(s < l)
    {
        mid = (s+l)/2;

        if(arr[0] >= arr[mid]) {
            // first line pe hai
            s = mid+1;
        }

        else {
            // ho skta hai pivot hi ho, toh apn mid-1 nhi krnge~
            l = mid;
        }
    }

    return s;     // or l meri marzi       
}