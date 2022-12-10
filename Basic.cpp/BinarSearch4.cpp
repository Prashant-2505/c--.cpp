#include <iostream>
using namespace std;

int main()
{

    int A[100];
    int key, n, low{0}, mid{0};

    cout << " Enter thr total elements " << endl;
    cin >> n;

    cout << " Enter the elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << " Enter the key " << endl;
    cin >> key;
    int high{n - 1};
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == A[mid])
        {

            cout << " Key found at index " << mid;
            exit(0);
        }
        else if (A[mid] < key)
            high = mid + 1;

        else
            low = mid - 1;
    }
    cout << " key is not found ";
    return 0;
}