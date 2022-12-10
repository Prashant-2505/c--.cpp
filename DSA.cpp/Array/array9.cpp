// linear search
// better algo of linear serach

#include <iostream>
using namespace std;

class array
{
    int A[1000] = {2, 12, 34, 56, 78, 7};
    int length =6, size;

public:
    array()
    {
       
    }
    void display()
    {
        cout << " Element are " << endl;
        for (int i = 0; i < length; i++)
        {

            cout << A[i] << " ";
        }
    }

    void swap(int *x, int *y)
    {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }
    int linear_search(int key)
    {

        for (int i = 0; i < length; i++)
        {
            if (A[i] == key)
            {
                cout << " key is found at ";
                swap(&A[i], &A[i - 1]);
                // swap( &A[i],&A[0]);   //method 2

                return i;
            }
        }
        return -1;
    }
};

int main()
{
    array a;
    cout << a.linear_search(7);
    a.display();
}
