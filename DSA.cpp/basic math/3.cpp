/*
 204. Count Primes
Medium

Given an integer n, return the number of prime numbers that are strictly less than n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0
 

Constraints:

0 <= n <= 5 * 106

*/

// sieve erathosthenes algo
#include<bits/stdc++.h>
using namespace std ;

int count_prime(int x)
{
   int count =0;
   vector<bool> prime(x+1,true);
   prime[0]= prime[1] = false;

   for(int i=2;i<x;i++)
   {
    if(prime[i])
    {
        count ++;

        for(int j=2*i;j<x;j=j+i)
        {
            prime[j]=false;
        }
    }
   }
   return count;
}

int main()
{
int x;
cout<<" Enter the no "<<endl;
cin>>x;
cout<<"the all no before "<<x<<" who is prime are "<<count_prime(x);
return 0;
}