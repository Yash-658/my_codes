#include<iostream>        //TWO POINTER APPROACH
#include<string>
#include<cmath>
using namespace std;


/* sorting 0s 1s 2s

class Solution {
  public:
    void sort012(vector<int>& arr) {
        int low = 0, mid = 0, high = arr.size()-1;
        while(mid<=high) {
            if(arr[mid]==0) {
                swap(arr[mid++],arr[low++]);
            }
            
            else if(arr[mid]==1) mid++;
            
            else {
                swap(arr[mid],arr[high--]);
            }
        }
    }
};

*/


// sorting 0s and 1s
int main(){
	int size = 10;
	int num[size] = {1,0,1,0,1,0,1,0,0,0};
	int i = 0, j = (size-1);
	while(i<j)
	{
		if(num[i] == 0 && num[j] == 1)
		{
			i++;
			j--;
		}

		else if(num[i] == 1 && num[j] == 0)
		{
			swap(num[i],num[j]);
			i++;
			j--;
		}

		else if(num[i]==0){i++;}
		else if(num[j]==1){j--;}
		
	}

	for (int i = 0; i < size; i++)
	{
		cout<<num[i]<<" ";
	}
	
	return 0;
}