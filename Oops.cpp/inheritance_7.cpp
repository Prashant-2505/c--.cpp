// Hiearchical inheritance

#include <iostream>
using namespace std;

class shape
{
public:
    int a, b;
    void size(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};

class rectangle : public shape
{
public:
    int rect_area()
    {
        return this->a * this->b;
    }
};

class circle : public shape
{
public:
    float area_cir()
    {
        return 0.25 * a * b;
    }
};

int main()
{
    rectangle r;
    circle c;

    int length, breadth, base, height;
    cout << " enter the length and breadth of rectangle " << endl;
    cin >> length >> breadth;
    r.size(length, breadth);
    int m = r.rect_area();
    cout << " Area of rectangle is " << m << endl;

    cout << "Enter the base and height of circle" << endl;
    cin >> base >> height;
    c.size(base, height);
    float n = c.area_cir();
    cout << " Area of circle is " << n << endl;

    return 0;
}