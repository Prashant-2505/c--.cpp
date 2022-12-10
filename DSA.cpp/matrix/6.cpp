// sprial matrix

#include <bits/stdc++.h>
using namespace std;

void ans(int A[][3])
{
    int col = 3;
    int row = 3;

    int top = 0; 
    int bottom = row - 1;

    int left = 0;     
    int right = col - 1;

    int total = row * col;
    int count = 0;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << A[top][i] << " ";
            count++;
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << A[i][right]<<" ";
            count++;
        }
        right--;

        if (top <= bottom)
        {

            for (int i = right; i >= left; i--)
            {
                cout << A[bottom][i]<<" ";
                count++;
            }
            bottom -- ;
        }

        if (left <= right)
            for (int i = bottom; i >= top; i--)
            {
                cout << A[i][left]<<" ";
                count++;
            }
        left++;
    }
}

int main()

{
    int n = 3;
    int m = 3;

    int A[3][3];
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

    ans(A);
}