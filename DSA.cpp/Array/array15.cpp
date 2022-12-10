// left rotate array by 1

#include <iostream>
using namespace std;
 
void lrotate_one(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    lrotate_one(arr, n);

    display(arr, n);
}