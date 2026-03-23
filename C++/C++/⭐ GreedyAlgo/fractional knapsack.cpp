// https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1


/* OKISH 
TC: O(nlogn) SC: O(N) using priority queue, so nlogn(pushing) + nlogn(popping)

double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        
        priority_queue<pair<double, int>> items;

        for(int i = 0; i < val.size(); i++) {
            items.push({(1.0 * val[i]) / wt[i], wt[i]});
        }

        int currWeight = 0;
        double value = 0;

        while(currWeight < capacity && !items.empty()) {
            auto [currRatio, currWt] = items.top();
            items.pop();

            if(currWeight + currWt <= capacity) {
                currWeight += currWt;
                value += currRatio * currWt;
            } else {
                int remain = capacity - currWeight;
                value += currRatio * remain;
                break;
            }
        }

        return value;
    }
*/

/* BEST APPROACH, same TC and SC but using sorting so only nlogn of sorting

class Solution {
public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        vector<pair<double,int>> items;

        for(int i = 0; i < val.size(); i++)
            items.push_back({(double)val[i]/wt[i], wt[i]});

        sort(items.rbegin(), items.rend());  // descending ratio

        double value = 0;
        int currWeight = 0;

        for(auto &[ratio, weight] : items) {
            if(currWeight + weight <= capacity) {
                currWeight += weight;
                value += ratio * weight;
            } else {
                value += ratio * (capacity - currWeight);
                break;
            }
        }

        return value;
    }
};
*/