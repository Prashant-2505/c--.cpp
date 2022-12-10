

#include <bits/stdc++.h>
using namespace std;

int maxi(int A[], int n)
{
    int max = A[0];
    for(int i=1;i<n;i++)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
    }

    
}

int main()
{
    int n;
    cout << " Enter the size of array" << endl;
    cin >> n;
    int *A = new int[n];
    cout << " Enter the element of array  " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout <<"max element in array is "<< maxi(A, n);
    return 0;
}