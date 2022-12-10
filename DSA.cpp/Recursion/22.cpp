// sum of element using recursion


#include<bits/stdc++.h>
using namespace std ;
   
int sumof (int A[], int n)
{
    if (n==0)
    return 0;
    if(n==1)
    return A[0];

   int remaining = sumof(A+1,n-1);
   int  sum  = A[0] + remaining;
   return sum;
}  

int main()
{
int n;
cin>>n;
int *A = new int [n];

for(int i=0;i<n;i++)
{
  cin>>A[i];
}

cout<<" sum of element is "<<sumof(A,n);
return 0;
}