// code studio [sort 0,1]   [easy]

#include<bits/stdc++.h>
using namespace std ;

vector<int> solution1(vector<int>V)
{
    sort(V.begin(),V.end());
    return V;
}
int main()
{
int n;
cin>>n;
vector<int> a;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    a.push_back(x);
}

vector<int> ans = solution1(a);
for(auto it : ans)
{
    cout<<it<<" ";
}
return 0;
}