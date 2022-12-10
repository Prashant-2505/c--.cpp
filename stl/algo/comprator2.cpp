// using comparator function in sort algo

#include <bits/stdc++.h>
using namespace std;

bool cmp(int A, int B) // comprator function
{
        return (A < B);
}
bool cmp2(pair<int, char> X, pair<int, char> Y) // comprator function
{
    if (X.first != Y.first)
    {
        return X.first > Y.first;
    }
    else
    {
        return X.second < Y.second;
    }
    return 0;
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

            {
                sort(A.begin(), A.end(), cmp);
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
            if (cmp2(B[i], B[j]))
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