#include<iostream>
using namespace std;

int main()         // Pointer is used to hold the adress of other data type
{

    int a = 10;           
    int *p = &a;  // *p point the at address where the a value is store 

    cout<<a<<endl;            // output of the data  
    cout<<&a<<endl;           // point at the adress where the data of a is stored
    cout<<p<<endl;            // output the value of p and the value of is address of the a
    cout<<&p<<endl;           // point at the adress of the pointer(P)
    cout<<*p;                 // Dereferencing the pointer

    return 0;
}