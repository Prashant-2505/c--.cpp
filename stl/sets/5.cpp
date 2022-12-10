#include<bits/stdc++.h>
using namespace std;

int main()
{

    multiset<string>A;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        string s;
        cin>>s;
        A.insert(s);
    }
    auto it = A.find("abc");
    if(it != A.end())
    {
        A.erase(it);
    }
    
    return 0;
}