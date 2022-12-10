// friend function
// Binary addition (operator overload)

#include <iostream>
using namespace std;

class complex
{

    int real;
    int imag;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
  

    void display()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
      friend complex operator+(complex c1, complex c2);  // we can use friend function to access private and public data member outside
                                                         //  the class without using scope resolution operator
};
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
} 

int main()
{
    complex c1(10, 2);
    complex c2(2, 9);
    complex c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}