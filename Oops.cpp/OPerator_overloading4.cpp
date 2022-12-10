// binary operator

#include<iostream>
using namespace std;
class complex
{
    public:
int real,imag;

complex(int x=0,int y=0)
{
    real = x;
    imag = y;
}
complex add (complex x)
{
    complex temp;
    temp.real = real + x.real;
    temp.imag = imag + x.imag;
    return temp;
}
};
int main()
{

    complex c1(10,2), c2(12,8), c3;
    c3 = c2.add(c1);
    cout<<c3.real<<"+i"<<c3.imag<<endl;
    return 0;
}