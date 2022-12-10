#include<iostream>
using namespace std;

/*class A
{
    public :
    int a;
    private:
    int b;
    friend void fun();
};
   void fun ()
   {
     A a;
     a.a =90;
     a.b=99;
   }
*/
  class my 
  {
    public :
    int a = 99;
    private: 
    int b= 99;
   friend you;
  };

  class you
  {
    void fun ()
    {
        my a;
        a.a = 9999;
        a.b = 90;
    }
  };