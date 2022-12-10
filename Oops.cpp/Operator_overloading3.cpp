// uniary operators

#include <iostream>
using namespace std;
class space
{
    int x;
    int y, z;

public:
    void set_data(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    }

    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};
int main()
{
    space s;
    s.set_data(10, -90, 23);
    s.display();
    -s;
    s.display();

    return 0;
}