// missing element

#include<iostream>
using namespace std;

int missing_element(int A[],int n)
{
         int sum{0};
         for(int i=0;i<n;i++)
         {
            sum = sum + A[i];
         }
   int S = n*(n+1)/2;

   int x = S-sum;
   return x;
}
int main()
{
    int n = 10;
    int A[n] {1,2,3,4,5,6,8,9,10};

   cout<<missing_element(A,n);
    return 0;
}