#include <bits/stdc++.h>
using namespace std;

int partion(int A[], int start, int end)
{
    int pivot = A[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (A[j] < pivot)
        {
            i++;
            swap(A[i], A[j]);
        }
    } 
    swap(A[i+1], A[end]);
    return i + 1;
}

void quicksort(int A[], int start, int end)
{
    if (start < end)
    {
        int pi = partion(A, start, end);
        quicksort(A, start, pi - 1);
        quicksort(A, pi + 1, end);
    }
}

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int *A = new int[n];
    cout << "enter the element of  array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int s = 0;
    int e = n - 1;
    quicksort(A, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}