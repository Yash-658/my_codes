#include<iostream>                                                    //https://youtu.be/6z2HK4o8qcU?t=218
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> smpl = {5, 8, 10, 17, 1, 3, 4};
    int mid, s = 0, l = (smpl.size()-1);
    while(1)
    {
        mid = (s+l)/2;
                                                                          
        if (smpl[mid]<smpl[mid+1] && smpl[mid]<smpl[mid-1])          // pr ye wale case mai uhm {3,8,10,17,1} nhi aayega ye wale case mai as isme pivot element (i.e 1) corner mai hai ekdm
        {                                                            // agr vo wala bhi nikalna hai toh video wali approach se code likh
            cout<<mid;
            break;
        }

        else if (smpl[mid]>=smpl[0])
        {
            s = (mid+1);
        }

        else
        { 
            l = (mid-1);
        }    
    }
    return -1;         //if not pivoted
}