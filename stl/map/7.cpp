#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> M;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int no;
        cin >> s >> no;
        M[s] = no;
    }

    for (auto it : M)
    {
        cout<<" [{" << it.first << "}, " << it.second<<"]"<<endl;
    }
    return 0;
}