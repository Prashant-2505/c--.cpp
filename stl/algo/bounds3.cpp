// in set

#include <bits/stdc++.h>
using namespace std;

void find(set<int> s, int x)
{
    auto it = s.lower_bound(x);
    if (it == s.end())
    {
        cout << " NOT FOUND ";
    }
    else
    {
        cout << *it;
    }
}
void find2(set<int> s, int x)
{
    auto it = s.upper_bound(x);
    if (it == s.end())
    {
        cout << " NOT FOUND ";
    }
    else
    {
        cout << *it;
    }
}
int main()
{

    int n;
    cin >> n;
    set<int> A;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.insert(x);
    }
    cout << " Set always be in sortin order already  " << endl;
    for (auto it : A)
    {
        cout << it << " ";
    }
    int x;
    cout << " Element to find ";
    cin >> x;
    find(A, x);
    cout << endl;
    find2(A, x);
    return 0;
}