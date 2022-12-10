// check array is sorted

#include <iostream>
using namespace std;

int sorted(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] > A[i + 1])

            return 0;
    }

    return 1;
}

int main()
{
    int n = 8;
    int A[n] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << sorted(A, n);
}