#include<iostream>
using namespace std;

void mssing(int A[],int size,int length)
{
    int temp[length];
    for(int i = 0; i < length; i++)
    {
      if (A[i]<A[i+1])
      {
         temp[i]=A[i];
      }
    }
}

int main()
{

    

    return 0;
}