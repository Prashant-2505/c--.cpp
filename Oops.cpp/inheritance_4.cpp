// multiple inheritance

#include <iostream>
using namespace std;

class a
{
protected:
    int a;

public:
    void get_a(int a)
    {
        this->a = a;
    }
};

class b
{
protected:
    int b;

public:
    void get_b(int b)
    {
        this->b = b;
    }
};

class c : public a, public b
{
public:
    void display()
    {
        cout << a << " " << b << endl;
        cout << a * b << endl;
    }
};

int main()
{
    c c;
    c.get_a(90);
    c.get_b(90);
    c.display();
    return 0;
}  


