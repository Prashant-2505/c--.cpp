#include<iostream>
using namespace std;


void fun (long int n)
{
    if(n>0)
    {
    cout<<n<<endl;
    fun( n-1);
    }
}

int main()
{
    long int x =10;
    fun(x);
    return 0; 
}
