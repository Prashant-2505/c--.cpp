// addition of complex numbers

#include <iostream>
using namespace std;
class complex
{
public:
    int real, imag;

    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    complex operator+(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};
int main()
{
    complex c1(2, 2);
    complex c2(1, 5);
    complex c3;

    c3 = c1.operator+(c2);
    cout << c3.real << " + i" << c3.imag << endl;
    return 0;
}
