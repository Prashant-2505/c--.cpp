// factorial

#include<bits/stdc++.h>
using namespace std ;
   
int factorial(int x)
{
    if (x==0)
    {
        return 1;
    }
     int ans = x * factorial(x-1);
     return ans;
}

int main()
{
int n;
cout<<" enter the no to find factorial "<<endl;
cin>>n;

cout<<factorial (n);
return 0;
}