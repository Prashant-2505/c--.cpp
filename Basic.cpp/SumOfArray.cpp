#include<iostream>
using namespace std;

int main()
{
int A[] = {2,4,5,6,7};
 int sum{0};
 for(int i=0 ; i<5; i++)
 {
     sum=sum+A[i];
 }

   cout<<sum; 

    return 0;
}


/*  Explantion

i       A[i]       sum=sum+A[i]

o        2          0+2=2
1        4          2+4=6
2        5          6+5=11
3        6          11+6=17
4        7          17+7=24 


*/
 
 