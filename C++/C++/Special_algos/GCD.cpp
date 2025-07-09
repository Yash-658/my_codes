// GCD(greatest common divisor) or HCF(highest common factor) 

// IMPORTANT RELATION: GCD(a,b) * LCM(a,b) = a*b

// with this euclid's algo, time complexity is: O(log(min(a,b)))
// if we use brute force, time complexity is: O(min(a,b))

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int gcd(int a, int b) {

    while(a != b) {
        if(a==0) return b;
        if(b==0) return a;

        if(a<b) {
            b = b%a;
        }

        else {
            a = a%b;
        }
    }


    return a;
}

int main(){
    cout<<gcd(25,100);
    return 0;
}