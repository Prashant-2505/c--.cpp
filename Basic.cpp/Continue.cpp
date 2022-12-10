#include<iostream>
using namespace std;

int main()
{
  int i;
  for ( i = 0; i < 20; i++)
  {
    if (i == 5)
    {
    continue;   // use continue to skip the given no and then continue
    }
  
    cout<<i<<endl;
  }
     
    return 0;
}

