#include <iostream>
using namespace std;
class test
{
public:
    void fun()
    {
        cout << " in-line function" << endl;
    }

    void fun2();
};

void test :: fun2()
{
cout<<" non inline function"<< endl;
}
int main()
{
   test t1;
   t1.fun();
   t1.fun2();
    return 0;
}