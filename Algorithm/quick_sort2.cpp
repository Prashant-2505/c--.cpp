#include <bits/stdc++.h>
using namespace std;

int partion(int arr[], int low, int high, int pivot)
{
    int pi = low;
    for (int i = low; i <= high; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[pi], arr[i]);
            pi++;
        }
    }

    pi--;
    return pi;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high];
        int pi = partion(arr, low, high, pivot);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[7] = {6, 3, 9, 5, 2, 8, 7};
    int n = 7;

    quicksort(arr, 0, n - 1);

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}