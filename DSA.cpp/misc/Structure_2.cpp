#include<iostream>
using namespace std;
struct Rectangle           // Create the structure
{
    float length;          // Data of the structure
    float breath;
};

int main()
{
Rectangle r;                                // Intialize the array
cout<<" Enter the length "<<flush;         // access the data of the structure
cin>>(r.length);
cout<<" Enter the breath "<<flush;
cin>>(r.breath);
cout<<" The area of rectangle is "<<r.breath*r.length;
    

    return 0;
}