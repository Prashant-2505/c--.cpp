#include <iostream>
using namespace std;

float multiply(float x, float y)       // create function named multiply performing multiplication
{
    float z;
    z = x * y;
    return z;                          // here we return  the z to main finction below
}

int main()
{
float a=5, b=5, c;
c = multiply(a,b);
cout<<c;
return 0;
}



// dont ever the do the funciton of user interface in the outsider function instead of main function