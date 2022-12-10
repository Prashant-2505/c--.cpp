#include<iostream>
using namespace std;

class base
{
    public:
    void display ()
    {
      cout<<"this is base class"<<endl;
    }
};

class derived:public base{};

int main()
{
    base b;
    b.display();
    derived d;
    d.display();
    return 0;
}