#include <iostream>
using namespace std;

int liear_search(int A[100], int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            return i;
        }
        
    }
    return -1;
}

int main()
{
    int A[100], key, n;
    cout << " Enter the length of array ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << " Enter the no to be searched ";
    cin >> key;

    int index = liear_search(A, key, n);
    if (index == -1)
        cout << " Key is not found ";
    else
        cout << " key is found at the index " << index+1;
}