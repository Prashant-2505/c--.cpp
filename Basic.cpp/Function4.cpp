#include<iostream>
using namespace std;

  int max(int a, int b, int c)
  {
      if(a>b && a>c)
       return a;                  // if condition is true then return a to max function --> main
       else if (b>c)
       return b;                  // else if condition is true then return b to max function --> main
       else
       return c;                 // else condition is true then return c to max function --> main
  }
int main()
{
      int x=23, y=78, z=99,r;
      r = max(x,y,z);           // callinfg function max and its value is save to r
      cout<<r;                  // print the the output that sav into r 
    

    return 0;
}