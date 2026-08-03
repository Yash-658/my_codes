#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int helper(int n, const vector<int> &groups) {
    int ans = 0;
    vector<int> freq(5, 0);
    for(int i: groups) {
        freq[i]++;
    }
    
    ans += freq[4];
    
    // now 3-1 combination
    int pair31 = min(freq[3], freq[1]);
    ans += pair31;
    freq[3] -= pair31;
    freq[1] -= pair31;
    
    // now buses for group of 3
    ans += freq[3];
    
    // now 2-2 combination~
    ans += freq[2]/2;
    freq[2] = freq[2] % 2;
    
    // now 2-1-1 combination~
    int pair211 = min(freq[2], freq[1]/2);
    ans += pair211;
    freq[2] -= pair211;
    freq[1] -= pair211*2;
    
    // now 2-1 combo~
    int pair21 = min(freq[2], freq[1]);
    ans+= pair21;
    freq[2] -= pair21;
    freq[1] -= pair21;
    
    // now 2 alone~
    ans += freq[2];
    
    // now 1-1-1-1 combo~
    ans += freq[1]/4;
    freq[1] = freq[1] % 4;
    
    if(freq[1] > 0) ans++;
    return ans;
}

int main() {
    int n;
    cin>>n;
    
    vector<int> groups(n);
    
    for(int i = 0; i < n; i++) {
        cin>>groups[i];
    }
    
    cout<<helper(n, groups);
    return 0;
}
