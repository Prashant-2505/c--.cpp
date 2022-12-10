// Ambiquity resolution
#include<iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<" Class A";
    }
};

class B
{
    public:
    void display()
    {
        cout<<" Class B";
    }
};

class c:public A,public B
{
    public:
    void view ()
    {
        A::display();
        B::display();
    }
};
int main()
{
    c c;
    c.A::display();
}