#include <iostream>
using namespace std;
class circle
{
private:
   const int pi = 22.7;
    int radius;

public:
    circle(int p, int r)
    {
        p = pi;
        set_radius(r);
    }
   

    void set_radius (int r)
    {
        if (r<0)
        radius = 0;
        else 
        radius = r;

    }
      int area()
    {
        return pi*radius   ;
    }

   

};
int main()
{
circle c1(22.7,9);
circle c2(22.7,-9);
cout<<c1.area()<<endl;
cout<<c2.area()<<endl;

    return 0;
}