#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


/*  ENCAPSULATION:

    A fully encapsulated class has all the data members private~
    THEORY -> https://www.naukri.com/code360/guided-paths/basics-of-c/content/118817/offering/1382190

    why do we do encapsulation? 
    -> for data hiding
    -> we can make a read-only class by making a fully encapsulated class with no setter functions, that way no one will be able to change the values of the data members
    -> Code reusability
    -> Unit testing

    INHERITANCE: https://www.naukri.com/code360/guided-paths/oops-in-c/content/274159/offering/3757646?leftPanelTabValue=PROBLEM&customSource=studio_nav
    
    -> Types of inheritance bhi link se hi pdho

    MULTIPLE INHERITANCE mai ambiguity aa skti hai,, it can be avoided by using scope resolution operator
    for example: 
    agr A and B class is inherited by C class, aur A and B mai same name ka "print()" fxn hai,
    toh for accessing "print()" of A in C, -> obj.A::print() 
    and for accessing "print()" of B in C, -> obj.b::print()


    POLYMORPHISM: https://www.naukri.com/code360/guided-paths/oops-in-c/content/274159/offering/3757648?leftPanelTabValue=PROBLEM&customSource=studio_nav
    
    -> Existing in multiple forms.
    -> two types: compile time (method overloading and operator overloading), and run time polymorphism (method overriding)
    
    -> Function overloading: fxns of the same name can exist in the same class if they have a different parameter list,
                             fxns can't be overloaded only on the basis of return type

    -> dynamic polymorphism: method overriding mai runtime ke pta chlega kaunsa fxn ki body execute hogi

    ABSTRACTION: https://www.naukri.com/code360/guided-paths/oops-in-c/content/274159/offering/3757645?leftPanelTabValue=PROBLEM&customSource=studio_nav

    -> Abstraction means providing only some of the information to the user by hiding its internal implementation details
    -> A Class can decide which data members will be visible to the outside world and not. Access specifiers are the main pillar of implementing abstraction in C++. 
       We can use access specifiers to enforce restrictions on class members.
    

    ENCAPSULATION VS ABSTRACTION -> https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbXlaN3BNYVN6d3lBejEzRk5rS0xINTZYZlZvQXxBQ3Jtc0tuaUVTalFsUTNMU1pKeEpDdmhjSmdJWUdybFppSVJROWVPdHduN0J6LTE3bHVhSjB0Y2c1d1paZXY1UGdndXBzVW9xOTdaZHRWMWZMVVdYZEkyVGMtQ3dqa2hOY1NYbkN2TTNYNWRoUUtkaFE4Z3RoVQ&q=https%3A%2F%2Fstackoverflow.com%2Fquestions%2F742341%2Fdifference-between-abstraction-and-encapsulationf&v=b3GccK5_KSQ
    */



class Human {
    private:
    float height;
    
    public:
    string name;
    int age;
    

    void get_info() const {
        cout<<this->name<<endl;
        cout<<this->age<<endl;
        cout<<this->height<<endl;
    }
};

class Male : public Human {
    public:
    const string gender = "male"; 
};

class Female : public Human {
    public:
    const string gender = "female"; 
};

int main(){
    Male m1;
    m1.name = "Yash";
    m1.age = 20;
    m1.get_info();
    cout<<m1.gender<<endl;
return 0;
}