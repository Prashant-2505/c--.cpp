// leetcode 169

#include <bits/stdc++.h>
using namespace std;

int solution1(vector<int> v)
{
    unordered_map<int, int> m;
   for(auto it : v)
   {
    m[it]++;
   }
   for( auto bt : m)
   {
    if(bt.second>(v.size()/2))
    {
        return bt.first;
    }
   }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> V;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        V.push_back(x);
    }
    cout << solution1(V);
}