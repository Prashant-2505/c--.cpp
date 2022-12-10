#include <iostream>
using namespace std;
class wall
{
public:
    int length;
    int breadth;

    wall(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()

    {
        return length * breadth;
    }

    void show_address()
    {
        cout<<" length "<<&length<<endl;
        cout<<" breadth "<<&breadth<<endl;
    }
};
int main()
{
wall wall1(10,20);
wall wall2(23,2);
cout<<wall1.area()<<endl;
cout<<wall2.area()<<endl;
wall1.show_address();
wall2.show_address();

    return 0;
}