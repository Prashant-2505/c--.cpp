#include<iostream>
using namespace std;

int fun(int x)
{
    if (x>0)
    {
return fun(x-1)+x;
    }
    return 0;
}
int main()
{

int n =5;
fun(n);
cout<<fun(n);
    return 0;
} 