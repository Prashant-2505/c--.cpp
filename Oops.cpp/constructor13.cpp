// Deep  copy

#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int *breadth;

    rectangle()
    {
        breadth = new int;
    }

    rectangle(rectangle &copy)
    {
        length = copy.length;
        breadth = new int;
        *breadth = *(copy.breadth);
    }

    void set_data(int len, int bre)
    {
        length = len;
        *breadth = bre;
    }

    void show_data()
    {
        cout << " length " << length << endl;
        cout << " breadth " << *breadth << endl;
    }

    void show_address()
    {
        cout << " adress of length of first rectangle " << &length << endl;
        cout << " adress of breadth of first rectangle " << breadth << endl;
    }
};
int main()
{

    rectangle r1;
    r1.set_data(12, 52);
    r1.show_data();

    rectangle r2 = r1;
    r2.show_data();
    r1.show_address();
    r2.show_address();

    return 0;
}