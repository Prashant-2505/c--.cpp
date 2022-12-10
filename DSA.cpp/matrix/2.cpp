// row wise sum of element 


#include <bits/stdc++.h>
using namespace std;

void ans(int A[][4], int n, int m)
{
    int sum;
    for (int i = 0; i < 4; i++)
    {
         sum = 0;
        for (int j = 0; j < 4; j++)
        {
           
            sum += A[i][j];
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

    ans(A, 4, 4);
    return 0;
}