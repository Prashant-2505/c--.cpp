// array rotation by 2 (best approach 2) reverse algorithm

#include <iostream>
using namespace std;

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {

        int temp = arr[low];
        arr[low] = arr[high]; 
        arr[high] = temp;
        low++;
        high--;
    }
}
void left_rotateby2(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int n = 5;
    int d = 2;
    int arr[n] = {1, 2, 3, 4, 5,6};
    left_rotateby2(arr, 5, 2);
    display(arr, n);
}