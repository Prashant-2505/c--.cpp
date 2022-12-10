#include<iostream>
using namespace std;
class Employee
{
public:
Employee(){                   // Create a default constructor having same name as class
cout<<" THis is a default constructor "<<endl;
}
};
int main()
{

  Employee e1;               // Declare object for call constructor
  Employee e2;               // Declare object for call constructor

    return 0;
}

