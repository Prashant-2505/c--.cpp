// leetcode 27 remove element

#include <iostream>
using namespace std;

int remove( int A[], int n, int T)
{
    for (int i = 0; i < n; i++)
    {
        if( A[i] == T)
        {
            A[i] = A[n-1];
            n--;
            i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " " ;
    }
    return n;
}

int main()
{
     int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int t;
    cin >> t;
    remove(A, n, t);
}