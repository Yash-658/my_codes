// THIS IS THE BRUTE FORCE APPROACH WITH INSERTION SORT, O(n^2)

// void insertionSort(int n, vector<int> &arr){                  
//     int temp, j;
//     for(int i = 1; i < n; i++)                             
//     {                                                         
//         temp = arr[i];
//         j = (i-1);

//         while(j>=0)
//         {
//             if(arr[j]>temp)
//             {
//                 arr[j+1] = arr[j];
//                 j--;
//             }
             
//             else
//             {
//                 break;
//             }
//         }

//         arr[j+1] = temp;
//     }
// }

// vector<int> findMedian(vector<int> &arr, int n){
	
// 	vector<int> res;
// 	for(int i = 1; i <= n; i++) {
// 		insertionSort(i, arr);
// 		if(i&1) {
// 			res.push_back(arr[i/2]);
// 		}

// 		else {
// 			int temp = (arr[i/2] + arr[i/2 - 1])/2;
// 			res.push_back(temp);
// 		}
// 	}

// 	return res;
// }


/* THIS IS THE OPTIMISED VERSION USING TWO HEAPS, see lecture 77: for the real code, this one was chatgpt
#include <bits/stdc++.h>
using namespace std;

class MedianFinder {
private:
    priority_queue<int> maxHeap; // lower half
    priority_queue<int, vector<int>, greater<int>> minHeap; // upper half

public:
    void addNum(int num) {
        // Case 1: Heaps are same size → insert into maxHeap
        if (maxHeap.size() == minHeap.size()) {
            if (!minHeap.empty() && num > minHeap.top()) {
                minHeap.push(num);
                num = minHeap.top();
                minHeap.pop();
            }
            maxHeap.push(num);
        }
        // Case 2: maxHeap has more → insert into minHeap
        else if (maxHeap.size() > minHeap.size()) {
            if (num < maxHeap.top()) {
                maxHeap.push(num);
                num = maxHeap.top();
                maxHeap.pop();
            }
            minHeap.push(num);
        }
        // Case 3: minHeap has more → insert into maxHeap
        else { // minHeap.size() > maxHeap.size()
            if (num > minHeap.top()) {
                minHeap.push(num);
                num = minHeap.top();
                minHeap.pop();
            }
            maxHeap.push(num);
        }
    }

    int findMedian() {
        if (maxHeap.size() == minHeap.size()) {
            return (maxHeap.top() + minHeap.top()) / 2;
        } else if (maxHeap.size() > minHeap.size()) {
            return maxHeap.top();
        } else {
            return minHeap.top();
        }
    }
};

// Example usage
int main() {
    MedianFinder mf;
    vector<int> stream = {5, 15, 1, 3, 2, 8};
    for (int num : stream) {
        mf.addNum(num);
        cout << "Inserted " << num << " → Median = " << mf.findMedian() << endl;
    }
    return 0;
}

*/