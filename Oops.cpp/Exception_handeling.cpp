#include<iostream>
using namespace std;

int main()
{

    int x =10, y=0, c;
 try
 {
   if (y==0)
    throw 101;
    else
    c = y/x;
    cout<<c<<endl;
 }
catch(int e)
{
    cout<<" division by zero "<<e;
}
    return 0;
}