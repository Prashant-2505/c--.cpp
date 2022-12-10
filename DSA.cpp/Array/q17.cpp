// swap alternate element

#include<bits/stdc++.h>
using namespace std ;
int main()
{
int n;
cin>>n;
int A[n];
for(int i=0;i<n;i++)
{
    cin>>A[i];
}
for(int i=0;i<n;i+=2)
{
   if (i+1<n)
   {
    swap(A[i],A[i+1]);
   }
}
for(int i=0;i<n;i++)
{
    cout<<A[i]<<" ";
}


return 0;
}