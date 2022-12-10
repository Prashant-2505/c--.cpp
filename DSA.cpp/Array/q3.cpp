// gfg find common in three arrays

#include <iostream>
using namespace std;

void common(int A[], int B[], int C[], int n, int m, int o)
{
    int i{0};
    int j{0};
    int k{0};
    for (i ; i < n; i++)
    {
        for (j; j < m; j++)
        {
           for(k;k<o;k++)
           {
            if(A[i]==B[j]==C[k])
            {
                cout<<A[i];
            }
           }
        }
    }
}

int main()
{
    int n;
    cout << " length of elements of array1 ";
    cin >> n;
    int m;
    cout << " length of elements of array2 ";
    cin >> m;
    int o;
    cout << " length of elements of array3 ";
    cin >> o;

    int A[n];
    int B[n];
    int C[n];
    cout << " elements of array1 ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "  elements of array2 ";
    for (int j = 0; j < m; j++)
    {
        cin >> B[j];
    }
    cout << "elements of array3 ";
    for (int k = 0; k < o; k++)
    {
        cin >> C[k];
    }
    common(A, B, C, n, m, o);
}