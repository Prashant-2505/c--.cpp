// Multiplication of matrix

#include <iostream>
using namespace std;

int main()
{

    int A[100][100];
    int B[100][100];
    int C[100][100];
    int i, j, k;
    int row1, col1, row2, col2;

    cout << " ENter the row and coloumn of the first matrix " << endl;
    cin >> row1 >> col1;
    cout << " Enter the total element " << row1 * col1 << " of the first matrix" << endl;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            cout << "[" << i << "]"
                 << "[" << j << "] ";
            cin >> A[i][j];
        }
    }
    cout << " First matrix is " << endl;
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            cout << "  " << A[i][j];
        }
        cout << endl;
    }

    cout << " ENter the row and coloumn of the second matrix " << endl;
    cin >> row2 >> col2;
    cout << " Enter the total element " << row1 * col1 << " of the second matrix" << endl;
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            cout << "[" << i << "]"
                 << "[" << j << "] ";
            cin >> B[i][j];
        }
    }
    cout << " Second matrix is " << endl;
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            cout << "  " << B[i][j];
        }
        cout << endl;
    }
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            for (k = 0; k < col1; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            cout << " " << C[i][j];
        }
        cout << endl;
    }
    return 0;
}