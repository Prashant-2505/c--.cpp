// gfg [ sort 0,1,2]
// leetcode [ 75 ]   [sort color]
// [ dutch flag algo]
// [ babar dsa sheet ]


#include <bits/stdc++.h>
using namespace std;

void ans2(int A[], int n)
{
    int s = 0;
    int m = 0;
    int e = n - 1;
    while (m <= e)
    {
        if (A[m] == 0)
        {
            swap(A[s], A[m]);
            s++;
            m++;
        }
        if (A[m] == 1)
        {
            m++;
        }
        if (A[m] == 2)
        {
            swap(A[e], A[m]);
            e--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void ans(int A[], int n)
{
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
  
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 0)
        {
            count1++;
        }
        if (A[i] == 1)
        {
            count2++;
        }
        if (A[i] == 2)
        {
            count3++;
        }
    }
    for (int i = 0; i < count1; i++)
    {
        A[i] = 0;
    }
    for (int i = count1; i < count2 + count1; i++)
    {
        A[i] = 1;
    }
    for (int i = count1 + count2; i < count1 + count2 + count3; i++)
    {
        A[i] = 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
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
    ans(A, n);
    cout<<endl;
    ans2(A,n);
    return 0;
}