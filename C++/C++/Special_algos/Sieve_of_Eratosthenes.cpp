// The Sieve of Eratosthenes is an ancient algorithm for finding all prime numbers up to a specified integer,, till n <= 10^6 

// you need to learn SEGMENTED SIEVE TOO once you get comfortable with this. It's used for solving problems with large ranges, like L = 10^9 and R = 10^9 + 10^5

#include<iostream>
#include<string>
#include<vector>
using namespace std;

#include <vector>                           // go from 2 to √n and for each prime found, cancel it's multiples in the range till n
class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) {return 0;}
        int count = 1;
        vector<int> if_prime(n+1,true);
        if_prime[0] = if_prime[1] = false;

        for(int i = 2; i*i <= n; i++) {
            if(if_prime[i]) 
            {
                //iske multiples ko prime = false flag krdo
                for(int j = i*i; j<=n; j = j + i) 
                {
                    if_prime[j] = false;
                }
            }
        }

        for(int i = 3; i < n; i = i +2) {
            if(if_prime[i]) count++;
        }
        return count;
    }
};


int main(){
    Solution num;
    cout<<num.countPrimes(10);
    
return 0;
}