// gfg intersection of array and find target 
// Array A[n] {1,2,4,5,7}
// Array B[m] {15,6,3,4,8}
// A[n] + B[m]== T
// Target = 4
// result = 1 + 4 = 4

#include <iostream>
using namespace std;

void sum(int A[], int B[], int n, int m, int T)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ( B[j] + A[i] == T)
            {
                cout << A[i] << " " << B[j] << endl;
            }
        }
    }
}

int main()
{
    int n = 5;
    int A[n]{1, 2, 4, 5, 7};
    int m = 5;
    int B[m]{5, 6, 3, 4, 8};

    sum(A, B, n, m, 4);
}


