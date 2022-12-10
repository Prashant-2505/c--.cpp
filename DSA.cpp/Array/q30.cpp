// find element in sorted rotated array 
// in time  o{log n}



#include <bits/stdc++.h>
using namespace std;
int pivot(int A[], int n)
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
           end =mid;
        }
    }
    return start;
}

int binary(int A[], int start, int end, int t)
{

    int s = start;
    int e = end;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (A[mid] == t)
        {
            return mid;
        }
        else if (t > A[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int solution(int A[], int n, int t)
{
    int Pivot = pivot(A,n);
    if(t>=A[Pivot] && t<=n-1 )
    {
        return binary(A,Pivot,n-1,t);
    }
    else
    {
        return binary(A,0,Pivot-1,t);
    }
    return -1;
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
    int T;
    cin >> T;
    cout << solution(A, n, T);
    return 0;
}