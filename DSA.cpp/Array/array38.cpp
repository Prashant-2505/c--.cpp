// selection sort


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

for(int i=0;i<n-1;i++)
{
    int min_index = i;
    for(int j=i+1;j<n;j++)
    {
        if(A[j]<A[min_index])
        {
            min_index=j;
        }
    }
    swap (A[min_index],A[i]);
}
for(int i=0;i<n;i++)
{
    cout<<A[i]<<" ";
}
return 0;
}