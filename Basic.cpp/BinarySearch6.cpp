#include <iostream>
using namespace std;

int main()
{

    int Arr[100];
    int low, high, mid, n, key;

    cout << " Enter the total no of elements " << endl;
    cin >> n;

    cout << " Enter the elements ind sorted way " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    low = 0;
    high = n - 1;
    cout << " Enter the no to be searched ";
    cin >> key;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == Arr[mid])
        {
            cout << " Key is found at the index " << mid;
            exit(0);
        }
        else if (key < Arr[mid])
        {
            high = mid - 1;
        }
        else if (key > Arr[mid])
        {
            low = mid + 1;
        }
    }
    cout << " Key is not found ";
    return 0;
}