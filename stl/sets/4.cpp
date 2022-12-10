// found string of n query

#include<bits/stdc++.h>
using namespace std;

int main()
{

unordered_set<string> A;
int n;
cin>>n;
for(int i=0; i<n; i++)
{
    string S;
    cin>>S;
    A.insert(S);
}
    cout<<" enter no of query"<<endl;
    int Q;
    cin>>Q;
    while(Q--)
    {
      string S;
      cout<<" Enter the string to be found ";
      cin>>S;
      auto it = A.find(S);
      if (it != A.end())
      {
        cout<<"yes"<<endl;
      }
      else
      cout<<" no";
    }

    return 0;
}