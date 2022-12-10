// r0tation by 2 inside a class



#include <iostream>
using namespace std;

class array
{
public:
    int A[20] = {1, 2, 3, 4, 5};
    int length = 5;

    void reverse(int A[], int low, int high)
    {
        while (low < high)
        {
            int temp = A[low];
            A[low] = A[high];
            A[high] = temp;
            low++;
            high--;
        }
    }

    void rotate(int A[], int n, int d)
    {
        reverse(A, 0, d - 1);
        reverse(A, d, n - 1);
        reverse(A, 0, n - 1);
    }
};

int main()
{

    array a;

    a.rotate(a.A, a.length, 2);
    for (int i = 0; i < a.length; i++)
    {
        cout << a.A[i] << " ";
    }
}