#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 34; 
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45; 
    // cout<<"The value of a is: "<<a<<endl;
    // // Constants in C++
    // const int a = 3;
    // a = 45;                                        // You will get an error because we declared "a" as a read only constant
    // cout<<"The value of a is: "<<a<<endl;
    // Manipulators in C++                            //manipulators are used for formatting our outputs
    int a =3, b=78, c=1234;
    cout<<"The value of a without setw is: "<<a<<endl; 
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a is: "<<setw(3)<<a<<endl;   //setw manipulator is used by the "iomanip" header                        
    cout<<"The value of b is: "<<setw(3)<<b<<endl;
    cout<<"The value of c is: "<<setw(3)<<c<<endl;

    // Operator Precedence
    // int a =3, b=4;
    // // int c = (a*5)+b;                  //ORDER OF OPERATOR IMPLEMENTATION- https://en.cppreference.com/w/cpp/language/operator_precedence,, no need to learn this, just use brackets
    // int c = ((((a*5)+b)-45)+87);         //use PEDMAS for implementation (i.e) Pareanthesis[()]--> Exponent --> Division --> Multiplication --> Addition --> Subtraction.
    // cout<<c;
                          
    return 0;
}