#include <bits/stdc++.h>
using namespace std;
int solution1(int A[], int n)
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum += A[i];
    }

    int Lsum =0;
    int Rsum = sum;

for(int i=0;i<n;i++)
{
    Rsum = Rsum-A[i];
    if(Lsum==Rsum){ return i; }
    Lsum = Lsum + A[i] ;
}
    return -1;
}
int main()
{
    int n = 6;
   
    int A[n]= {1,0,0,0,0,0};
 
cout<<solution1(A,n);
    return 0;
}