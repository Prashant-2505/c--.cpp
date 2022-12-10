#include<iostream>
using namespace std;
class Geeks{                       // First create a class
public:
string geekname;                   // Data member

void printname(){                  // Create void funtion

cout<<" Geekname is: "<<geekname;  
}
};

int main()
{

    Geeks obj1;                    // Declare an aobject of class geeks
    obj1.geekname = " Prashant";   // Acessing data member
    obj1.printname();              // Acessing member function
    return 0;
