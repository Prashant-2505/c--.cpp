#include <iostream>
using namespace std;

class rectangle
{
    int length, breadth;

public:
    rectangle()
    {
        length = 1;
        breadth = 1;
    };
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    
    int get_length()
    {
        return length;
    }
    int get_breadth()
    {
        return breadth;
    }
    void set_length(int l)
    {
        length = l;
    } 

    void set_breadth(int b)
    {
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void display()
    {
        cout << area() << endl;
    }
};

class cube : public rectangle
{
    int height;

public:
    cube(int h)
    {
        height = h;
    }


    int get_height()
    {
        return height;
    }
    void set_height(int h)
    {
        height = h;
    }
    int volume()
    {
        return get_breadth() * get_length() * height;
    }
    void display()
    {
        cout <<"volume of cube is " <<volume() << endl;
    }
};

int main()
{

    cube c(20);
   c.set_length(20);
    c.set_breadth(20);
    c.volume();
    c.display();

    rectangle r;
    r.set_breadth(20);
    r.set_length(20);
    r.area();
    r.display();
    return 0;
}
