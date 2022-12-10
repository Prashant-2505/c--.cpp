#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breath;

    int area()
    {
        return length * breath;
    }
    int permieter()
    {
        return 2 * (length + breath);
    }
};
int main()
{
     rectangle r1,r2;
     
     r1.length=10;
     r1.breath=20;
     cout<<r1.area()<<endl;
     cout<<r1.permieter()<<endl;

     cout<<" Enter the length of rectangle ";
     cin>>r2.length;
     cout<<" Enter the breath of rectangle ";
     cin>>r2.breath;

     cout<<r2.area()<<endl;
     cout<<r2.permieter()<<endl;
    
    return 0;
}