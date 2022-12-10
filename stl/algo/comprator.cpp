

#include <bits/stdc++.h>
using namespace std;

bool should_i_swap(int A, int B) // comprator function
{
    if (A < B)
        return true;
    return false;
}
bool should_i_swap2(pair<int, char> X, pair<int, char> Y) // comprator function
{
    if (X.first != Y.first)
    {
        if (X.first > Y.first)
            return true;
        return false;
    }
    else
    {
        if (X.second < Y.second)
            return true;
            return false;
    }
}

void vector_comprator()
{
    int n;
    cin >> n;
    vector<int> A;

    for (int i = 0; i < n; i++)
    {
        int V;
        cin >> V;
        A.push_back(V);
    }

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            if (should_i_swap(A[i], A[j]))
            {
                swap(A[i], A[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void pair_comprator()
{
    int n;
    cin >> n;
    vector<pair<int, char>> B;
    for (int i = 0; i < n; i++)
    {
        int x;
        char y;
        cin >> x >> y;
        B.push_back(pair<int, char>(x, y));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (should_i_swap2(B[i], B[j]))
            {
                swap(B[i], B[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << B[i].first << " " << B[i].second << endl;
    }
}
int main()
{
     vector_comprator();
  //  pair_comprator();
    return 0;
}