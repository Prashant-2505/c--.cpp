// count duplicate element 

#include<iostream>
using namespace std;


void duplicate (int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        if (A[i]==A[i+1])
        {
           int j = i+1;
           while (A[j] == A[i]) j++;
           cout<<A[i]  <<" duplicate "<<j-i<<" time";
           i = j+1;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int A[n];

    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    duplicate(A,n);
}