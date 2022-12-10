// merging of two sorted array

#include <bits/stdc++.h>
using namespace std;

void merge(int A[], int B[], int C[], int n, int m)
{
    int i{0}, j{0}, k{0};
    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        if (B[j] < A[i])
        {
            C[k++] = B[j++];
        }
    }
    while (i < n)
        C[k++] = A[i++];
    while (j < m)
        C[k++] = B[j++];
    for (int i = 0; i < n + m; i++)
    {
        cout << C[i] << " ";
    }
}

int main()
{
    int n = 5;
    int m = 5;
    int A[n]{1, 3, 5, 7, 9};
    int B[m]{2, 4, 6, 8, 10};
    int C[m + n];
    merge(A, B, C, n, m);

    return 0;
}