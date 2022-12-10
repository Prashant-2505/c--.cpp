#include <iostream>
using namespace std;
int binary_search(int A[100], int key, int n)
{
    int start{0}, end{n - 1}, mid{(start + end) / 2};
    while (start <= end)
    {
        if (A[mid] == key)
            return mid;
        else if (A[mid] < key)
            return start = mid + 1;
        else if (A[mid] > key)
            return end = mid - 1;
    }
    return -1;
}
int main()
{
    int n;
    cout << " Enter the length of thea array ";
    cin >> n;
    int A[100];
    cout << "Enter the element " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int key;
    cout << " Enter the no to be searched " << endl;
    cin >> key;

    int index = binary_search(A, key, n);
    if (index == -1)
        cout << " no is not found ";
    else
        cout << " NO is found at the index " << index + 1;

    return 0;
}