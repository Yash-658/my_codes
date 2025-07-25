#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Element {
    public: 
    int data;
    int row;
    int col;

    Element(int data, int row, int col) {
        this->data = data;
        this->row = row;
        this->col = col;
    }
};

// functor
class Compare {
    public:
    bool operator() (const Element &a, const Element &b) {
        return a.data > b.data;
    }
};

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<int> res = {0, INT_MAX};
        int maxm = INT_MIN;

        priority_queue<Element, vector<Element>, Compare> minHeap;
        for(int i = 0; i < nums.size(); i++) {
            int a = nums[i][0];
            Element temp(a, i, 0);
            minHeap.push(temp);
            maxm = max(a, maxm);
        }

        // now I have a minHeap storing first elements of all lists and a "maxm" var containing the max of all these elements~

        // we have to stop when one of the lists become empty~
        while(true) {
            Element temp = minHeap.top();
            minHeap.pop();

            int minm = temp.data;
            if(maxm - minm < res[1] - res[0]) {         // if global range length is more than this range, update~
                res[0] = minm;
                res[1] = maxm;
            }

            // now if it exists, push the next element of the list from which this current popped element is~
            int n = nums[temp.row].size();
            if((temp.col + 1) < n) {
                // update maxm and minHeap
                maxm = max(nums[temp.row][temp.col + 1], maxm);
                minHeap.push(Element(nums[temp.row][temp.col + 1], temp.row, temp.col + 1));
            }

            else {
                break;
            }
        }

        return res;
    }
};
