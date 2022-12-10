#include<iostream>
using namespace std;
class complex
{
public:
int real,imag;
void print()
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}
complex(int r=0,int i=0)
{
real = r;
imag=i;
}
};

int main()
{
    complex c1(4,5);
    complex c2(2,7);
    complex c3;
    c3 = c1+c2;
     c3.print();

    return 0;
}