#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int helper(int n, int k, vector<vector<int>> diffCurrAfter) {
    
    sort(diffCurrAfter.begin(), diffCurrAfter.end());
    
    int ans = 0, currItemCount = 0;
    
    // buy all who give profit first, then if required buy more from curr, and then but on after price~
    
    for(auto i: diffCurrAfter) {
        if(i[0] < 0 || currItemCount < k) {
            ans += i[1];
            currItemCount++;
        }
        
        else{
            ans += i[2];
            currItemCount++;
        }
    }
    
    return ans;
}

int main() {
    int k, n;
    cin>>n>>k;
    
    vector<vector<int>> diffCurrAfter(n, vector<int>(3));
    
    for(int i = 0; i < n; i++) {
        cin>>diffCurrAfter[i][1];
    }
    
    for(int i = 0; i < n; i++) {
        cin>>diffCurrAfter[i][2];
        diffCurrAfter[i][0] = diffCurrAfter[i][1] - diffCurrAfter[i][2];
    }
    
    cout<<helper(n, k, diffCurrAfter);
    return 0;
}