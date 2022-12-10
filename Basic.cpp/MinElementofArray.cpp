#include <iostream>
using namespace std;

int main()
{

    int A[] = {23, 43, 22, 11, 98, 12};
    int n{7}, min;
    min = A[0];

    for (int i = 1; i < 7; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    cout << min;

    return 0;
}


