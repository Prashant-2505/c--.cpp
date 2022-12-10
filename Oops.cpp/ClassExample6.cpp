#include<iostream>
using namespace std;
class students                     // Create the class name students
{
public:                            // Access specifier
int id;                            // Data member
string name;                       // Data member
void printname();                  // Member function outside the class but not defined in class by using ; 
void printid()                     // Member function inside the class
{
cout<<" The student id is "<<id;
}
};
void students::printname()          // Defination of member function outside the class by using :: scope resolution operator
{
    cout<<" The student name is "<<name;
}
int main()
{  
students obj1;                      // Declare the object of class students
obj1.id = 12;                       // Accessing the data member
obj1.name = "Prshant";              // Accessing the data member

obj1.printname();                   // Accessing the member function
cout<<endl;
obj1.printid();                     // Accessing the member function
    return 0;
}