// OOPs - Classes and objects                     //SHORT NOTES FOR C++

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make methods and properties as private & as public
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */

// Nesting of member functions: If one member function is called inside the other member function of the same class it is called nesting of a member function.

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void display();                    // we made these methods private as we are calling 'em from nesting them into other class methods so if the user tries to access them they will get an error.
    void chk_bin();
public:
    void read();
    void ones_compliment();

};

void binary::read()
{
    cout << "Enter a binary number" << endl;
    cin >> s;
    chk_bin();
}

void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')                 //STRING MAI C++ MAI HMESHA '' USE KRNA, NA KI ""
        {
            cout<<"Invalid binary format";
            exit(1);                                    // sirf return; use krte toh ye wala function khtm hota, we used exit(0) to exit the program itself with return code 0
        }
    }
}

void binary::ones_compliment()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
    display();
}

void binary::display()
{
    cout<<s<<endl;
}

int main()
{
    binary b;
    b.read();
    b.ones_compliment();
    return 0;
}
