// print no n times

#include<iostream>
using namespace std;

void fun(int i,int n)
{
    if (i>n)
    return;
    cout<< i;
    fun (i+1,n);
}
int main()
{
    int i =0;
    int n;
    cin>>n;
    fun(i,n);
}