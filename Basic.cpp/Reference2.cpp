#include<iostream>
using namespace std;

    void display()
    {
        cout<<"hello";
    }

int main()
{
void (*fp)();           // calling function, create pointer, give parameter
fp = display;           // intialization of pointer
(*fp)();                // calling the function
    return 0;
}