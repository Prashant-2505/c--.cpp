// using heap memory in class



#include <iostream>
using namespace std;
class square
{
public:
    int side;

    int area()
    {
        return side * side;
    }
};
int main()
{

    square *p;
    p = new square;
    p->side = 10;
    cout << p->area()<<endl;
    cout<<p<<endl;                // heap address where the pointer point 
    cout<<&p<<endl;               // adress of fpointer that created in stack

    return 0;
}






