#include <iostream>
using namespace std;
class circle
{
private:
    float pi = 22.7;
    int r;

public:
    float area()
    {
        return pi * r * r;
    }

    void set_pi(int p)
    {
        pi = p;
    }
    void set_r(int rad)
    {    if(rad<0)
       rad = 0;
       else
       r = rad;
    }

    float get_r()
    {
        return r;
    }
};
int main()
{

    circle c;
    c.set_r(-11);
    cout<<c.area()<<endl;
    cout<<c.get_r();

    return 0;
}