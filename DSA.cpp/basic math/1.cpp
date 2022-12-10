// prime no

 
#include<bits/stdc++.h>
using namespace std ;

bool isprime(int x)
{
   
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return false;
            
        }
    }
    return true;
    
}

int main()
{
int n;
cout<<" Enter the no "<<endl;
cin>>n;

if(isprime(n))
{
    cout<<" its a prime no ";
}
else
{
    cout<<" its not a prime no ";
}
return 0;
}