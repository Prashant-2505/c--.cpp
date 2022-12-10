#include<iostream>
using namespace std;

int add(int x, int y, int z=0)
{
    return x+y+z;
}


int main()
{
  cout<<"  5+9     "<<add( 5,9)<<endl;
  cout<<"  1+9     "<<add(1,9)<<endl;
  cout<<"  2+5+9   "<<add(2,5,9)<<endl;

    return 0;
}

//   if we want to call to two diffrent function but performing same operation so 
//   we have to pass some argument to make that 2 or fumction called at same time in a main function
//   in simplwe word we can add 2 or more overloading function by using the arguments