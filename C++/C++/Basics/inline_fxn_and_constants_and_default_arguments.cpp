#include<iostream>
#include<string>                              //REVISE STATIC VARIABLES
using namespace std;

inline int product(int a, int b){                 //fxn's when have low lines of code like this, we make them inline so that they take less time to compile
    return a*b;
}

inline int after_interest(int a, float interest = 0.04){      //we settled 0.04 as the default value of the argumenet "interest", so even if we don't pass this argument, we get 
    return a+(a*interest);
}
 
// int strlen(const char *p){                 //Constant arguments are used when you don’t want your values to be changed or modified by the function
                                              //mostly used as a precaution whilst using call by reference or values
// }

int main(){
    // int a = 5, b = 9;
    // cout<<"The product of a & b is: "<<product(a,b);
    int money = 100000;
    cout<<"After investing "<<money<<" a year, you get "<<after_interest(money)<<" in the end"<<endl;
    cout<<"After investing "<<money<<" a year as a VIP member, you get "<<after_interest(money,0.08)<<" in the end";
    return 0;
}
