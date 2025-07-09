#include<iostream>
#include<vector>
using namespace std;

double more_precision_sqrt(int precision, int temp_sol, int key) {
    double ans = temp_sol;
    double factor = 1;
    for(int i = 0; i<precision; i++) {
        factor /= 10;

        while(1) {
            if((ans+factor)*(ans+factor)<key) {
                ans += factor;
            }

            else{
                break;
            }
        }
    }
    return ans;
};

int main() {
    int n = 98;
    cout<<"Square root of " << n << " is: " <<more_precision_sqrt(10,6,42)<< endl;
}