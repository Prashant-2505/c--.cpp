// interview Question 
// output ??
 


#include<iostream>
using namespace std;

int main()
{

int *p;
int c = 50;
p = &c;
int d = *p++ + c++ + ++*p;
cout<<d;
    return 0;
}


