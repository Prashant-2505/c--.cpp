#include <iostream>
using namespace std;

int search(int A[100], int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])

            return i;
    }
    return -1;
}

int main()
{
    int A[100];
    int n;
    int key;

    cout << " enter the length of array ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << " enter the no to be searched ";
    cin >> key;

    int index = search(A, key, n);
    if (index == -1)
        cout << "key is not found ";
    else
        cout << " key is found at position " << index + 1;

    return 0;
}