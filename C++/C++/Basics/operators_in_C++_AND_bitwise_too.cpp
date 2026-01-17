#include<iostream>
using namespace std;

int main()
{
   // int a=5, b=9; 
   // cout<<"Following are the types of operators in C++";

   // // Arithmetic operators
   // // SPECIAL CASES FOR "/" :
   // // 2/5 will give 0 and not 0.4 ,,cuz in C++,, 
   // // int/int = int, float/int = float, double/int = double.
   // // so to get 0.4, we will do 2.0/5 to get 0.4

   // cout<<"\nthe value of a+b is: "<<a+b;
   // cout<<"\nthe value of a-b is: "<<a-b;
   // cout<<"\nthe value of a*b is: "<<a*b;
   // cout<<"\nthe value of a%b is: "<<a%b;            // "%" (moduluss operator) returns the remainder when 5 is divided by 9 .
   // cout<<"\nthe value of a++ is: "<<a++;            // "a++" ne phele a ki value print kra and phir usne a ki value mai +1 kiya.
   // cout<<"\nthe value of a-- is: "<<a--;            // "a--" ne phele a ki value print kra and phir usne a ki value mai -1 kiya.
   // cout<<"\nthe value of ++a is: "<<++a;            // "++a" ne phele a ki value mai +1 kiya and phir print kiya.
   // cout<<"\nthe value of --a is: "<<--a;            // "--a" ne phele a ki value mai -1 kiya and phir print kiya.
   
   // // Assignment operators --> used to assign values to variable
   // // int a=5, b=9
   // //char x='L'

   // // Comparison operators
   // cout<<endl;   
   // cout<<"\nThe value of a==b is: "<<(a==b);
   // cout<<"\nThe value of a!=b is: "<<(a!=b);
   // cout<<"\nThe value of a<=b is: "<<(a<=b);
   // cout<<"\nThe value of a>=b is: "<<(a>=b);
   // cout<<"\nThe value of a>b is: "<<(a>b);
   // cout<<"\nThe value of a<b is: "<<(a<b);

   // // Logical operators

   // cout<<endl;
   // cout<<"\nFollowing are the logical operators in C++: "<<endl;
   // cout<<"The value of this 'logical and' operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl; 
   // cout<<"The value of this 'logical or' operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl; 
   // cout<<"The value of this 'logical not' operator (!(a==b)) is: "<<(!(a==b))<<endl; 
   // return 0;

   // bitwise operators    //THEY WORK ON BITS RATHER THAN NUMBERS.
   // https://drive.google.com/file/d/1hBPUhy-1v-9eCqTMnZLaAVehAc9unctJ/view
 
   int a = 4, b = 6;
   cout<<" a&b : "<< (a & b)<<endl;
   cout<<" a|b : "<< (a | b)<<endl;
   cout<<" ~a : "<< (~a)<<endl;               // Bitwise NOT (~)
   cout<<" a^b : "<< (a ^ b)<<endl;           //XOR or EX-OR operator, odd no. of elements ko 1, even walo ko 0, for ex: 1^1 = 0, 1^0 = 1
return 0;
}  

