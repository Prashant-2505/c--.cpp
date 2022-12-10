// constructor in inheritance

#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        int a = 2, b = 9, c;
        c = a + b;
        cout << " sum is " << c << endl;
    }
};

class B :  public A
{
    public:
    B()
    {
        int a = 9, b = 6, c;
        c = b - a;
        cout << " Difference is " << c << endl;
    }
};

class C :public B
{
    public:
    C() 
    {
        int a = 9, b = 8, c;
        c = a * b;
        cout << " multipication is " << c << endl;
    }
};

int main()
{
    C c;
    return 0;
}