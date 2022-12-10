#include <iostream>
using namespace std;
class rectangle
{
    int length;      // this is main declare variable
    int width;

public:
    void set_data(int length, int width)     // this is a local declare variable
    {
        this->length = length;    // this pointer is pointing at the main data member/variable of the class
        this->width = width;
    }
    int area()
    {
        return length * width;
    }
};
int main()
{
    rectangle r1;
    r1.set_data(10, 10);

    cout << r1.area() << endl;

    return 0;
}