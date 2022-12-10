// leetcode 1207


#include <bits/stdc++.h>
using namespace std;
string solution (vector <int>v)
{
    cout << endl;
    for (auto bt : v)
    {
        cout << bt << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size()-1; i++)
    {
        if (v[i] == v[i+1])
        {
            return " false";
        }
    }
    return " true";
}
int main()
{
    vector<int> temp;
    map<int, int> M;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        M[x]++;
    }

    for (auto it : M)
    {
        cout << it.first << " " << it.second << endl;
    }
    for (auto it : M)
    {
        temp.push_back(it.second);
    }

    cout<< solution(temp);
    return 0;
}