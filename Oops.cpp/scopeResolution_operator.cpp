#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    void set_data(int l, int b);
    void show_data();
    int area();
    rectangle();
    rectangle(int l, int b);
    rectangle(rectangle &copy);
};
int main()
{
    rectangle r1;
    r1.set_data(10, 10);
    r1.show_data();
    cout << r1.area()<<endl;
   
    rectangle r2(20, 20);
    cout << r2.area() << endl;

    
    rectangle r3 = r2;
    cout << r3.area() << endl;
    r3.show_data();

    return 0;
}

void rectangle ::set_data(int l, int b)
{
    length = l;
    breadth = b;
}

void rectangle ::show_data()
{
    cout << length << " " << breadth << endl;
}

int rectangle ::area()
{
    return length * breadth;
}

rectangle ::rectangle()
{
    length = 12;
    breadth = 12;
}

rectangle ::rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

rectangle ::rectangle(rectangle &copy)
{
    length = copy.length;
    breadth = copy.breadth;
}