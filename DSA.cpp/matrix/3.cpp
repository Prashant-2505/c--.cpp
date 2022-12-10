// row wise sum of element 
// col wise sum of element 


#include <bits/stdc++.h>
using namespace std;

void rowsum(int A[][4], int n, int m)
{
    int row ;
    int col ;
    int sum;
    for (int row = 0; row < 4; row++)
    {
         sum =0;
        for (int col = 0; col <4; col++)
        {
            sum += A[row][col];
        }
        cout << sum << endl;
    }
}


void colsum(int A[][4], int n, int m)
{
    int row ;
    int col ;
    int sum;
    for (int col = 0; col < 4; col++)
    {
         sum =0;
        for (int row = 0; row <4; row++)
        {
            sum += A[row][col];
        }
        cout << sum << endl;
    }
}
int main()
{
    int n = 4;
    int m = 4;

    int A[4][4];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    colsum(A, 4, 4);
    cout<<endl;
    rowsum(A,4,4);
    return 0;
}