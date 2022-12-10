#include<iostream>
using namespace std;

int main()
{

    int  a = 5;
    int b = 2;
    int c = 6;

    if (b>a&&a>c&&c>b)
    {
        b = a+1;
    }

   else 
   a = b+ 1;

   cout<<a+b+c;

    return 0;
}