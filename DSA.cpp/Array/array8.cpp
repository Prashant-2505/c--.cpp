// deleteion operation

#include <iostream>
using namespace std;

class array
{
    int A[10] = {2, 3, 5, 6, 7};
    int size = 10;
    int length = 5;

public:
    array()
    {
    }

    void display()
    {
        cout << "elements are" << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " " << endl;
        }
    }

    int Delete(int index)
    {
        int x;
        if (index >= 0 && index <= length)
        {
            x = A[index];
            for (int i = 0; i < length - 1; i++)
            {
                A[i] = A[i + 1];
            }
            length--;
            return x;
        }
        return 0;
    }
};
int main()
{
    array a;

    cout << a.Delete(0) << endl;
    a.display();
}