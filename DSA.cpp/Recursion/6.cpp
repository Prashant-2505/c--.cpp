// ststic variable always have theri one copy only and it stays in memory after the program excution not like normal 
// variable that will be delete after the excution automatically

#include<iostream>
using namespace std;

int fun (int x)
{
    static int a = 5;
    if(x>0)
    {
        return fun(x-1)+a;
    }
    return 0;
}
int fun2 (int x)
{
   
    if(x>0)
    {
        return fun2(x-1)+x;
    }
    return 0;
}
int main()
{
    int n=5;
    cout<<fun2(n);
}