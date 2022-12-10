#include <iostream>
using namespace std;
class students                 // Creating a class name sudents
{
public:                        // Acess specifier 
    string name;               // Data member

    void printname()           // Member function
    {
        cout << " The student name is " << name;
    }
};
int main()
{
    students obj1;             // Declare a object abj1 of class students
    obj1.name = " Prashant ";  // Access the data member 
    obj1.printname();          // Acess the member function
    return 0;
}