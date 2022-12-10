#include <iostream>
using namespace std;

int search(int A[], int key, int n)
{
    for (int i = 0; i < n; i++)

        if (key == A[i])

            return i;
            return 0;
}

int main()
{
    int A[] = {2, 4, 6, 3, 12, 34};
    int k;
    cout << " Enter the key  to be found ";
    cin >> k;
    int index = search(A, k, 6);
    cout << " key is found at index: " << index;

    return 0;
}