// pointer to class


#include <iostream>
using namespace std;
class rectngle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }
};
int main()
{
rectngle r1;
rectngle *p;
p = &r1;
p->length=10;
p->breadth=20;
cout<<p->area()<<endl;
cout<<p<<endl;
cout<<&r1<<endl;
cout<<&p;
    return 0;
}