#include <iostream>
using namespace std;

    float maxim(float x, float y, float z)
 {   
   if(x>y && x>z)
   return x;
   else if(y>z)
   return y;
   else
   return z;
}

int main()
{
    
  cout<<" maxim no is "<<maxim(99.9,23.23,43.4);
    return 0;
}