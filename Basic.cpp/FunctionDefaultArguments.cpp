#include<iostream>
using namespace std;

int add(int x, int y, int z=0)
{
    return (x+y+z);
}

int main()
{
    cout<<add(9,9,2)<<endl;
    cout<<add(4,5);
    return 0;
}