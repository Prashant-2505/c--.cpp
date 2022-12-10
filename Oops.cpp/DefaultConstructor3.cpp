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

    void input(){
        cout<<" Enter the length "<<flush;
        cin>>length;
        cout<<" Enter the bresth "<<flush;
        cin>>breath;
    }
    double AreaOfRectangle()
    {
        return length * breath;
    }
};
int main()
{
  rectangle r1( );
  r1().input();
  cout<<r1().AreaOfRectangle();
    return 0;
}