

#include <bits/stdc++.h>
using namespace std;

void print1(int *p)
{
    cout <<*p << endl;
    cout<<p<<endl;
}

void print2(int p)
{
    cout << p << endl;
}

void update(int *p)
{
    p = p +1;
    cout <<" after update p "<< p << endl;
}
void update2(int *p)
{
    *p = *p +1;
    cout <<" after update p "<< *p << endl;
}


int main()
{
    int a = 10;
    int *p = &a;
    print1(p);
    print2(*p);
    update(p);
    update2(p);
    cout<<" before update p is (main)"<<p<<endl;
    cout <<" after update p (main ) "<< *p << endl;
    return 0;
}