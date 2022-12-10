// find sub array of given array

#include<bits/stdc++.h>
using namespace std ;
void subarray(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
           for(int k=i;k<=j;k++)
           {
            cout<<A[k]<<" ";
           }
        cout<<endl;
        }
    }
}

int main()
{
int n;
cin>>n;
int A[n];
for(int i=0;i<n;i++)
{
    cin>>A[i];
}
subarray(A,n);
return 0;
}