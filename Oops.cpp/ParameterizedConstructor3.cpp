
#include <iostream>
using namespace std;
 
class Point
{
private:
    int x, y;
 
public:
    // Parameterized Constructor
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
        cout<<" hello world"<<endl;
    }
 
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
 
int main()
{
    // Constructor called
    Point p1(10, 15);
 
    // Access values assigned by constructor
    cout<< "The value at x " << p1.getX() << ", The value at y " << p1.getY();
 
    return 0;
}