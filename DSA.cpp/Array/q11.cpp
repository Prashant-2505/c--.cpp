// leetcode 283 move zero

#include <iostream>
using namespace std;

void move_zero(int A[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != 0)
        {
            A[j] = A[i];
            j++;
        }
    }
    while (j < n)
    {
        A[j] = 0;
        j++;
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
    move_zero(A, n);

    return 0;
}