// move negative at left side 
// babbar dsa sheet

#include <bits/stdc++.h>
using namespace std;

void ans(int A[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] < 0)
        {
            swap(A[i], A[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
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

  
    ans(A, n);

    return 0;
}