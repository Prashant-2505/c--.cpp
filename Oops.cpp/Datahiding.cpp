#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    void set_length(int L)
    {
        if (L < 0)
        {
            cout << " enter the correct length, it can be negative " << endl;
            length = 1;
        }
        else

            length = L;
    }
    void set_breadth(int b)
    {
        if (b < 0)
        {
            cout << " enter the correct breadth, it can't be negative " << endl;
            breadth = 1;
        }
        else
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
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    rectangle r;
    r.set_length(-10);
    r.set_breadth(50);
     cout << "Length is become " << r.get_length() << endl;
    cout << "area is " << r.area() << endl;
   
    return 0;
}