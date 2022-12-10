#include <bits/stdc++.h>
using namespace std;

int solution(int A[], int n)
{
    int length = n / 2;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[i] == A[j])
            {
                count++;
            }
        }
        if (count > length)
        {
            return A[i];
        }
    }
    return -1;
}

// int solution2(vector<int> B)
// {
//     for (int i = 0; i < B.size(); i++)
//     {
//         int length = B.size() / 2;
//         int count = 0;
//         for (int j = 0; j < B.size(); j++)
//         {
//             if (B[i] == B[j])
//             {
//                 count++;
//             }
//         }
//         if (count > length)
//         {
//             return B[i];
//         }
//     }
//     return -1;
// }

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << solution(A, n);

// vector<int> V;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//          int a;
//          cin>>a;
//          V.push_back(a);
//     }
//     cout<<solution2(V);
 }