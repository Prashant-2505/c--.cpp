// reverse array using auxillary

#include<iostream>
using namespace std;
void reverse (int A[],int B[],int n)
{

for (int i=n-1,j=0;j<n;i--,j++)
{
    B[j] = A[i];
}

for (int i=0;i<n;i++)
{
    A[i] = B[i];
}


for (int i=0;i<n;i++)
{cout<<A[i]<<" "; 
}

}
int main()
{ 
    int n =10;
    int A[n] = {1,2,3,4,5,6,7,8,9,10};
     int B[n];
     reverse(A,B,n);
}