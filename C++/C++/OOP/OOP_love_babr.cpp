#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

/* https://www.naukri.com/code360/guided-paths/oops-in-c/content/238489/offering/3210644?leftPanelTabValue=PROBLEM&customSource=studio_nav -> THEORY
An object of an empty class takes 1 byte of space for it's track or identification

class Hero{
    properties
} Thor

1. Padding is introduced in memory allocation to ensure proper alignment of data within structures. CPUs have specific memory alignment requirements for different types of data. When you have a structure containing different data types, the compiler might insert "padding bytes" between members to align them according to the CPU's requirements. 

2. Greedy alignment refers to the practice of arranging the members of a structure or class in such a way that padding is minimized. By placing members with larger alignment requirements before those with smaller alignment requirements, you can potentially reduce the amount of padding required.
In languages like C++, where memory layout has a significant impact on performance due to cache lines and memory access patterns, arranging members to minimize padding can lead to better memory utilization and potentially improved runtime efficiency.

*/

class Hero{
    const int id;

    public:
    int level;
    char hero_class;
    static int time_to_complete;                 // Static members are class variables which belongs to a class itself and can be accessed even without an object


    static int time_required() {                 // Static functions can be called with the help of scope resolution operator, they don't have access to "this" keyword
        return time_to_complete;                 // They can only access static members
    }  

    void get_info();
    void check_level() const {                   // A function declared with const guarantees it won’t modify any member variables of the class,
        cout<<level<<endl;                       // Useful when you want to allow read-only access to class members.
    }

    Hero() : id(10) {
        cout<<"Default constructor"<<endl;
    }

    Hero(int id, int level, char hero_class) : id(id), level(level), hero_class(hero_class)                 // This is a initialization list: level(level), hero_class(hero_class), can be used to initlaise constant data members
    {                                                      // jb class bnate toh ek default constructor aur ek copy constructor apne aap create hojata hai, we can also overwrite these by creating ours.
        this->level = level;                               // 'this' returns an iterator to the current object
        (*this).hero_class = hero_class;
    }

    // custom copy constructor, now this will override the "Default copy constructor" [REVISE SHALLOW AND DEEP COPY ONCE https://youtu.be/i_5pvt7ag7E?si=9J4t-pgOnxRb1njJ&t=3608]
    // Hero(Hero &h) {
    //     cout<<"Copy constructor called"<<endl;
    //     this->level = h.level;
    //     this->hero_class = h.hero_class;
    // }

    // ~Hero() {                                        // Destructor deallocates all the memory allocated to the object before the object is destroyed
    //     cout<<"Destructor called"<<endl;             // i.e for static objects, just before termination of program, and for dynamic objects just before the "delete" fxn
    // }
};

void Hero::get_info() {
    cout<<"The ID of this Hero is "<<id<<endl;
    cout<<"The current level of this Hero is "<<level<<endl;
    cout<<"The class of this Hero is "<<hero_class<<endl;
    cout<<endl;
}


int Hero::time_to_complete = 10;           // this is how static members are initialised, gotta initalize it before accessing a static member and they are always initialized in global scope

int main(){
    // Hero saitama(999, 'C');
    // Hero *h1 = new Hero(5, 'A');        // for dynamic objects we can access the data members and data functions with the help of "->" or by using dereferencing op with "."
    // h1->get_level();
    // (*h1).level = 60;
    // (*h1).get_level();
    // delete h1;

    // Hero ramesh(10, 'B');
    // ramesh.get_info();
    // Hero suresh(ramesh);                   // made suresh by using the "default copy construtor" already made by the compiler while creating a class
    // suresh.get_info();

    // cout<<"Before using assignment op: "<<endl;
    // Hero h1(100,'C');
    // h1.get_info();
    // Hero h2(75,'B');
    // h2.get_info();
    //
    // cout<<"After using assignment op: "<<endl;
    // h1 = h2;
    // h1.get_info();
    // h2.get_info();

    // Hero h1;
    // Hero *h = new Hero();
    // delete h; 
    // cout<<"After deleting dynamic object~"<<endl;

    // const Hero saitama(1, 10, 'A');            // constant objects: Can only call const member functions, Cannot modify any member data.
    // saitama.get_info();                     // this line will give an error

    cout<<Hero::time_to_complete<<endl;

    return 0;
} 
