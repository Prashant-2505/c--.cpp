
// count all the no before x is prime or not

// time complexity o(n^2)

#include<bits/stdc++.h>
using namespace std ;

bool isprime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}

int countprime(int x)
{
   int count =0;
   for(int i=2;i<x;i++) 
   {
     if(isprime(i)) 
     {
        count ++;
     }
   }
   return count;
}

int main()
{
int n;
cout<<" enter the no "<<endl;
cin>>n;
cout<<"total prime no before "<<n<<" is "<<countprime(n);
return 0;
}