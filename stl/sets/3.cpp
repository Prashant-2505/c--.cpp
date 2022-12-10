// print unique string in lexographical order
#include<bits/stdc++.h>
using namespace std;

int main()
{

set<string> S;
int N;
cin>>N;
for(int i=0; i<N; i++)
{
    string str;
    cin>>str;
    S.insert(str);
}
for(auto it : S)
{
    cout<<it<<endl;
}
    return 0;
}