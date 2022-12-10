// using vector 

#include <bits/stdc++.h>
using namespace std;

void find(vector<int> V, int X)
{
    auto it = lower_bound(V.begin(), V.end(), X);
    if (it == V.end())
    {
        cout << " Not found ";
    }
    else
        cout << *it;
}

void find2(vector<int> V, int X)
{
    auto it = upper_bound(V.begin(), V.end(), X);
    if (it == V.end())
    {
        cout << " Not found ";
    }
    else
        cout << *it;
}

int main()
{
    vector<int> A;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    cout << " Vector befor sorting " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    sort(A.begin(), A.end());
    cout << " vector after the sorting " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    int x;
    cout << " ENTER THE ELEMENT YOT WANT TO FIND ";
    cin >> x;

    find(A, x);
    cout << endl;
    find2(A, x);

    return 0;
}