// leetcode 217 contain duplicate 

#include <bits/stdc++.h>
using namespace std;

// time complexity  O(n^2)
int duplicate(int A[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] == A[j])
            {
                return true;
            }
        }
    }
    return false;
}

// time complexity O(n)
int duplicate2(vector<int> A)
{
int n = A.size();
    sort(A.begin(), A.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // int n;
    // cin >> n;
    // int A[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> A[i];
    // }
    // cout<< duplicate1(A,n);
    
    int n;
    cin >> n;
    vector<int> A;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        A.push_back(a);
    }
    cout << duplicate2(A);
}