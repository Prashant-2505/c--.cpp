#include <iostream>
using namespace std;

class array
{
private:
    int A[20] = {1,2,3,4,5};
    int size;
    int length;

public:
    array()
    {
        size = 20;
        length = 5;
    }
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << A[i] << " ";
        }
    }
};

int main()
{
    array a; 
    a.display();
}