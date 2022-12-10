#include <iostream>
using namespace std;

int main()
{

    int row, col, A[100][100];

    cout << "Enter the total elements of row ";
    cin >> row;

    cout << " Enter the total elements of col ";
    cin >> col;

    cout << " matrix is " << row << " * " << col << endl;
    cout << " Enter the " << row * col << " elements" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> A[i][j];
        }
    }

cout<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}