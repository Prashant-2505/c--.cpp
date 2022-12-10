#include<iostream>
using namespace std;

int fun(int x)
{
static int a=0;
if (x>0)
{ 
    a++;
    return fun(x-1)+a;
}
return 0;
}
int main()
{
    int n ;
    cout<<" enter the no "<<endl;
    cin>>n;
    cout<<fun(n);
}