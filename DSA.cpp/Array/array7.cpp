// insert operation

#include <iostream>
using namespace std;

class array
{
    int A[10] = {2, 3, 5, 7, 9};
    int size;
    int length;

public:
    array()
    {
        size = 10;
        length = 5;
    }

    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
    }
    void insert(int index, int x)
    {
        if (index >= 0 && index < length)
        {
            for (int i = length; i > index; i--)
            {
                A[i] = A[i - 1];
            }
            A[index] = x;
            length++;
        }
    }
};
int main()
{
    array a;
    a.insert(0, 98);
    a.display();
}