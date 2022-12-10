// shallow copy

#include <iostream>
using namespace std;
class circle
{
private:
    int pi = 22.7;
    int radius;

public:
    circle(int p, int r)
    {
        pi = p;
        set_radius(r);
    }

    circle(circle & c)
    {
        pi = c.pi;
        set_radius(c.radius);
    }

    void set_radius(int r)
    {
        if (r < 0)
            radius = 0;
        else
            radius = r;
    }
    int area()
    {
        return pi * radius;
    }
};
int main()
{
    circle c1(22.7, 9);
    circle c2 = c1;
    cout << c1.area() << endl;
    cout << c2.area() << endl;
    cout<<&c1<<endl;
    cout<<&c2<<endl;


    return 0;
}