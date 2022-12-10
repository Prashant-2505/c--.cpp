// Hybird inheritance

#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    void get_a()
    {
        cout<<" enter the value of A"<<endl;
        cin>>a;
    }
 
};

class B : public A
{
    public:
    int b;
    void get_b()
    {
        cout<<" Enter the value of b"<<endl;
        cin>>b;
    }
};

class C
{
    public:
    int c;
    void get_c()
    {
        cout<<" Enter the value of c"<<endl;
        cin>>c;
    }
   

};

class D : public B,public C
{
public:
 void display ()
    {
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
void mul ()
{
    cout<<a*b*c<<endl;
}
};

int main()
{
    D d;
    d.get_a();
    d.get_b();
    d.get_c();
    
    d.display();
    d.mul();
    return 0;
}