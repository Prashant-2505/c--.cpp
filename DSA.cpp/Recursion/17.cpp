// fibonacci sereies using recursion


/*
509. Fibonacci Number
Easy



Share
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence,
 such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

 


*/
#include<bits/stdc++.h>
using namespace std ;
static int A[10] ;


// time complexity  o(2^n)     expontial 
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }

    int ans = fib(n-1)+fib(n-2);
   return ans;
}


// time complexity  o(n)
// using memorization method by not called function tha already called and store its result in static array;

int fib2(int n)
{
    if(n<=1)
    {
        return n;
        A[n]=n;
    }

    if(A[n-2]==-1)
    {
         A[n-2] = fib2(n-2);
    }
     if(A[n-1]==-1)
    {
         A[n-1] = fib2(n-1);
    }

    int ans = A[n-2]+A[n-1];
   return ans;
}




int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    A[i]=-1;
}
cout<<fib2(n);
return 0;
}