#include <iostream>
using namespace std;
class rectangle
{
private:
    double length, breath;

public:
    rectangle(double l, double b)
    {
        length = l;
        breath = b;
    }

   
    double AreaOfRectangle()
    {
        return length * breath;
    }
};
int main()
{
  rectangle r1(10,50 );
  
  cout<<r1.AreaOfRectangle();
    return 0;
}