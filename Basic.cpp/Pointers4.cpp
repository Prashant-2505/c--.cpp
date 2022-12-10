// Pointer sto the function

#include<iostream>
using namespace std;

 void display()
 {
     cout<<"helo world ";
 }

int main()
{

void (*fc)();
fc = display;
(*fc)();

    return 0;
}