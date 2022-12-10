// codestudio easy [ find unique element ]
// leetcode 136 [ single element ]

#include <bits/stdc++.h>
using namespace std;

//  time complexity ---> o(n^2)
int solution1(int A[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int count{0};
        for (int j = 0; j < n; j++)
        {
            if (A[i] == A[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
        }
        else
        {
            return A[i];
        }
    }

    return 0;
}

// time complexity ---> o(n)
int solution2(int A[], int n)
{
    int a{0};
    for (int i = 0; i < n; i++)
    {
        a = a ^ A[i];
    }
    return a;
    return 0;
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
    cout << solution2(A, n);
    return 0;
}