// inserting in sorted array and shift all element to the right
// check array is sorted or not
// rearrange the array negative at left position and right positive at position

#include <iostream>
using namespace std;

class array
{
    int A[20]{1, 2, 3,- 4, 5, -7, 8, -9};
    int size;
    int length = 8;

public:
    void display()
    {
        cout << " Elements are " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
    }

    int array_sorted()
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (A[i] < A[i + 1])
                return 1;
        }
        return 0;
    }

    void insert(int x)
    {
        int i = length - 1;
        if (length == size)
            return;
        while (i >= 0 && A[i] > x)
        {
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = x;
        length++;
    }

    void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    void rearrange()
    {
        int i = 0;
        int j = length - 1;

        while (i < j)
        {
            while (A[i] < 0)
                i++;
            while (A[j] > 0)
                j--;
            if (i < j)
                swap(&A[i], &A[j]);
        }
    }
};
int main()
{
    array a;
   //  cout << a.array_sorted() << endl;
   //  a.insert( 6);
    a.rearrange();
    a.display();
}