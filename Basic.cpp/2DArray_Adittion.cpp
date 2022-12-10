#include <iostream>
using namespace std;

int main()
{

    int A[100][100];
    int B[100][100];
    int C[100][100];
    int row, col;

    cout << " Enter the length row and coloumn of first array " << endl;
    cin >> row >> col;

    cout << " Enter the " << row * col << " element of array " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "[" << i << "]"
                 << "[" << j << "]";
            cin >> A[i][j];
        }
    }

    cout << " First matrix is " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << " Enter the " << row * col << " element of 2nd array " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "[" << i << "]"
                 << "[" << j << "]";
            cin >> B[i][j];
        }
    }

    cout << " second matrix is " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << " Addition of two matrix is " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}