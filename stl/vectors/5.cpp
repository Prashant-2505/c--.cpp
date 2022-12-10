//copy of vector from original  vector

#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<char> V (10,'a');
for(int i = 0; i < V.size(); i++)
{
    cout<<V[i]<<" ";
}

vector<char> V2(V);
for(int i = 0; i < V2.size(); i++)
{
    cout<<V2[i]<<" ";
}
    return 0;
}