#include<iostream>
using namespace std;
class Employee{
public:
Employee()                                // default constructor is created
{
    cout<<" Constructor invoked "<<endl;
}
~Employee()                              // destructor 
{
    cout<<" Destructor invoked "<<endl;
}

};
int main()
{
Employee e1;
Employee e2;
    

    return 0;
}