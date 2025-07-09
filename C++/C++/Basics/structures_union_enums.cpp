#include<iostream>
using namespace std;

struct employee                              //The structure is a user-defined data type that is available in C++. 
{                                            //Structures are used to combine different types of data types, just like an array is used to combine the same type of data types
    int eId; //4
    char favChar; //1
    float salary; //4
};

union money                                   // Unions are similar to structures but they provide better memory management then structures.
{                                             // Unions use shared memory so only 1 variable can be used at a time.               
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    // enum Meal{ breakfast, lunch, dinner};      // 1st we have created an enum “Meal” in which we have stored three named constants (breakfast, lunch, dinner)                                              
    // cout<<breakfast;                           // The main thing to note here is that (breakfast, lunch, dinner) are constants; the value for “breakfast” is “0”, the value for “lunch” is “1” and the value for “dinner” is “2”
    // cout<<lunch;                               // TIP : Enum is short for enumerate, meaning to allot a number. Another way to understand enums :D


    // cout<<dinner;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    struct employee harry;
    struct employee shubham;
    struct employee rohanDas;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout<<harry.eId<<endl; 
    cout<<harry.favChar<<endl; 
    cout<<harry.salary<<endl;
    return 0;
}