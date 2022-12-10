// insert/add element at last position only operation

#include <iostream>
using namespace std;

class array
{
    int A[10] = {2, 3, 5, 6, 7};
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

    void append(int x)
    {
        if (length < size)
            A[length] = x;
        length++;
    }
};

int main()
{
    array a;
    a.append(8);
    a.display();
}