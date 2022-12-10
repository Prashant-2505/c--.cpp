// duplicate in array in sorted order

#include <iostream>
using namespace std;

void duplicate(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] == A[j])
            {
                cout << " " << A[i] << " ";
            }
        }
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
    cout << " Duplicate is ";
    duplicate(A, n);
}
