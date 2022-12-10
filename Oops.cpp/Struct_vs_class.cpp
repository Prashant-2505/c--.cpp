// structure and class both are same but difference is just that in structure  all tha data member and function are public by default
// but in class  all tha data member and function are private  by default and you can switch it to public, private, protected



#include <iostream>
using namespace std;
struct Demo
{
    int x, y;
    void display()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Demo d;
    d.x = 10;
    d.y = 23;
    d.display();

    return 0;
}

/*
#include <iostream>
using namespace std;
class Demo
{
    public:
    int x, y;
    void display()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Demo d;
    d.x = 10;
    d.y = 23;
    d.display();

    return 0;
}

*/