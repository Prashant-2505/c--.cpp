/* 
Given N strings, print unique string in lexiography order with
their frequencies */

#include <bits/stdc++.h>
using namespace std;

void maps()
{
    map<string,int> A;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        A[s];                    // means value is save in map 
        A[s] = A[s] + 1;
    }
    for(auto it : A  )
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main()
{
    maps();
    return 0;
}