// leetcode 26 remove duplicate from sorted array

#include <iostream>
using namespace std;

void non_d(int A[], int n)
{
    int j = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] != A[i + 1])
        {
            A[j] = A[i + 1];
            j++;
        }
    }
    cout<<j<<endl;
      for (int i = 0; i <= j-  1; i++)
    {
       cout<< A[i];
    }


}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

     non_d(A, n);
   
    return 0;
}