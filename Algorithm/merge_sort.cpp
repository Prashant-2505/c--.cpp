#include <bits/stdc++.h>
using namespace std;

void merge(int *A, int s, int e, int n)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    int main_index = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = A[main_index++]; 
    }

    for (int i = 0; i < len2; i++)
    {
        second[i] = A[main_index++];
    }

    int index1 = 0;
    int index2 = 0;
    int k = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            A[k++] = first[index1++];
        }
        else
        {
            A[k++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        A[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        A[k++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergesort(int *A, int s, int e, int n)
{

    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // for left part
    mergesort(A, s, mid, n);
    // for right part
    mergesort(A, mid + 1, e, n);

    merge(A, s, e, n);
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

    cout << endl
         << "array after the sorting  ";

    mergesort(A, s, e, n);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}