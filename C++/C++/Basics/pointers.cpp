#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types, 
    //ex: if u wanna hold address of a int datatype, create pointer using "int*", for string, "string*" etc
    int a=3;
    int* b = &a;

    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer                ,,tells the address of the pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;  //means the value of address which b contains.

    return 0;
}

// One important clarification. The asterisk(*) is an attribute of the variable not the type which your explanation seems to suggest. 
//This distinction is important because if you consider the following line:
// int* x, y;
// x is a pointer to an int while y is just an int. 
//If you wanted both to be pointers you would need to write something like:
// int *x, *y;
