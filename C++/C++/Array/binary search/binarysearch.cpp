#include<iostream>
#include<string>
using namespace std;

int binary_search(int arr[],int n,int key);
int main(){        
    int arr[5] = {40, 80, 900, 1800};                                             //Time complexity: O[log n] (log to the base 2),, which is better than linear search (time complexity: O(n))
    cout<<binary_search(arr ,4  ,800);   
    return 0;
}

int binary_search(int arr[],int n,int key)
{
    int s=0, l=(n-1);
    int mid;    
    while (s<=l)
    {
        mid = (s+l)/2;      //If numbers of the order of pow(2,32) comes in arr then it's possible tha after (s+l/2) becomes greater than int range, soo to overcome this issue we can write the formula of mid as: [mid = s + (l-s)/2]
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            l = (mid-1);
        }
        else
        { 
            s = (mid+1);
        }        
    }
    return -1;
}