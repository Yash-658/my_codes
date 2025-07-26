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


/* THIS IS THE OPTIMISED VERSION USING TWO HEAPS O(NlogN)
#include<queue>

int signum(int a, int b) {
	if(a == b) return 0;
	if(a > b) return 1;
	else return -1;
}

void getMedian(int element, priority_queue<int> &maxHeap, 
priority_queue<int, vector<int>, greater<int>> &minHeap, int &median) {

	switch(signum(maxHeap.size(), minHeap.size())) {
		case 0: 
		if(element > median) {
			minHeap.push(element);
			median = minHeap.top();
		}

		else {
			maxHeap.push(element);
			median = maxHeap.top();
		}

		break;

		case 1:
		if(element > median) {
			minHeap.push(element);
			median = (minHeap.top() + maxHeap.top())/2;
		}

		else {
			minHeap.push(maxHeap.top());
			maxHeap.pop();
			maxHeap.push(element);
			median = (minHeap.top() + maxHeap.top())/2;
		}
		break;

		case -1:
		if(element > median) {
			maxHeap.push(minHeap.top());
			minHeap.pop();
			minHeap.push(element);
			median = (minHeap.top() + maxHeap.top())/2;
		}

		else {
			maxHeap.push(element);
			median = (minHeap.top() + maxHeap.top())/2;
		}
		break;
	} 
}

vector<int> findMedian(vector<int> &arr, int n){
	vector<int> res;
	priority_queue<int> maxHeap;
	priority_queue<int, vector<int>, greater<int>> minHeap;
	int median = 0;

	for(int i = 0; i < n; i++) {
		getMedian(arr[i], maxHeap, minHeap, median);
		res.push_back(median);
	}

	return res;
}

*/