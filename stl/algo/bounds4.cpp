// in map


#include <bits/stdc++.h>
using namespace std;

void find(map<int,int> s, int x)
{
    auto it = s.lower_bound(x);
    if (it == s.end())
    {
        cout << " NOT FOUND ";
        
    }
    else
    {
        cout << (*it).first;
    }
}
void find2(map<int,int> s, int x)
{
    auto it = s.upper_bound(x);
    if (it == s.end())
    {
        cout << " NOT FOUND ";
    }
    else
    {
        cout << (*it).first;
    }
}
int main()
{

    int n;
    cin >> n;
    map<int,int> A;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        A[x];
    }
    cout << " maps always be in sortin order already  " << endl;
    for (auto it : A)
    {
       cout<<it.first<<" ";
    }
    int x;
    cout << " Element to find ";
    cin >> x;
    find(A, x);
    cout << endl;
    find2(A, x);
    return 0;
}