// this keyword



#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;
    rectangle(int l, int b)
    {
        this->length = l;
        breadth = b;
        cout << this << endl;
    }

    rectangle(rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    int area()
    {
        return length * breadth;
    }
};
int main()
{

    rectangle r1(10, 10);
    rectangle r2 = r1;

    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << &r1;

    return 0;
}