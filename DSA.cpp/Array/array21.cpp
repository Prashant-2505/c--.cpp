// array reverse

#include<iostream>
using namespace std;

void reverse (int A[],int n,int low,int high)
{
    while (low < high)
    {
    int temp = A[low];
    A [low] = A [high];
    A[high] = temp;
    low ++;
    high--;
    }
}

int main ()
{
    int n = 9;
    int A[n]{1,2,3,4,5,6,7,8,9};
    reverse(A,n,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
}