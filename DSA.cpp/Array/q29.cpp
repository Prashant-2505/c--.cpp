// code studio [easy]
// [find minimum in sorted rotated array ] in time of [o(log n)]


#include <bits/stdc++.h>
using namespace std;
int minimum(int A[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (A[mid] >= A[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
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
    cout << minimum(A, n);
    return 0;
}