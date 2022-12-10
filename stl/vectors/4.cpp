// user input
#include <bits/stdc++.h>
using namespace std;
void user_input()
{
    vector<int> V;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        V.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<V[i]<<" ";
    }
}
int main()
{
    user_input();
}