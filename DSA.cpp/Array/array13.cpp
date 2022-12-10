// reversing array by swapping

#include <iostream>
using namespace std;

void reverse(int A[],int low , int high)
{

    while(low < high)
    {
        swap(A[low],A[high]);
        low ++;
        high --;
    }

  
   
}
int main ()
{
    int n = 9;
int A[n] = {1, 2, 3, 4, 5, 6,7, 8, 9};
 reverse(A, 0,n-1);
  for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}