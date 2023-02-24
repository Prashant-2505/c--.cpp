// heap sort

#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left <n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n)
{
    int size = n;

    while (size > 0)
    {
        swap(arr[0], arr[size]);
        size--;
        heapify(arr, size, 0);
    }
}

int main()
{

    int arr[5] = {50, 55, 45, 67, 30};
    int n = 5;

    for (int i = n / 2 -1; i >= 0; i--)
    {
        heapify(arr, n-1, i);
    }


   cout<<"before sorting"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout<<"after sorting"<<endl;
    heapsort(arr, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}