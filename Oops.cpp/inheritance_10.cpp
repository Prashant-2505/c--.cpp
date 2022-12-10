#include <iostream>
using namespace std;

class rectangle
{
public:
    int length, breadth;
    rectangle ();
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area_rect()
    {
        return length * breadth;
    }
};

class cube : public rectangle
{
public:
    int height;
    cube(int h)
    {
        height = h;
    }
    int area_cube()
    {
        return area_rect() * height;
    }
};

int main()
{
    rectangle r(10, 20);
    cube c(2);
    int m = r.area_rect();
    int n = c.area_cube();
    cout << "area of rectangle is " << m << endl;
    cout << "area of cube is " << n << endl;

    return 0;
}