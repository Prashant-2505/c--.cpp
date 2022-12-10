// how constructor called in inheritance

#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << " default cons of base " << endl;
    }
     base(int x)
    {
        cout << " parameterized cons of base " << x << endl;
    }
};

class derived : public base
{
public:
      derived()
      {
          cout << "default cons of derived " << endl;
      }

    derived(int y)
    {
        cout << " parameterized cons derived " << y << endl;
    }

    derived(int y, int x) : base(x)
    {
        cout << " parameterized cons derived " << y << endl;
    }
};

int main()
{
    derived d(10, 100);
  
}