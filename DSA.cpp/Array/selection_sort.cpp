

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int *A = new int[n];
    cout << "Enter the element of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "array before soting" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl
         << "array after soting" << endl;

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[i])
            {
                min = j;
            }
        }

        swap(A[min], A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}