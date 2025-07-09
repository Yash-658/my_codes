#include <iostream>
#include <string>
using namespace std;

class student                            //access specifiers: public, private and protected,, IF WE DON'T SPECIFY WHAT IS THE TYPE OF PROPERTY,
{                                        // ****BY DEFAULT IT'S PRIVATE****
private:
    int roll_no;
    string religion;

public:
    int standard, age;
    void set_data(int a1, string b1, int c1, int d1); // convinience ke liye yha fxn declare krdiya hai apn isko baad mai define kr lenge,, yha bhi bna skte the jese get_Data ko bnaya.
    void get_data()
    {
        cout << "The roll_no is: " << roll_no << endl;
        cout << "The religion is: " << religion << endl;
        cout << "The standard is: " << standard << endl;
        cout << "The age is: " << age << endl;
    };
};

void student ::set_data(int a1, string b1, int c1, int d1)
{
    roll_no = a1;
    religion = b1;
    standard = c1;
    age = d1;
};

int main()
{
    student harsh;
    harsh.set_data(5, "hindu", 12, 14);
    // harsh.roll_no = 9;                 // will show error as "a" is declared as private so only class methods can access it
    harsh.age = 18; // yha over-write hojayega as "d" was public var.
    harsh.get_data();
    return 0;
}