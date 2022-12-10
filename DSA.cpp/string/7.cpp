// string and its frequency

#include<bits/stdc++.h>
using namespace std ;
int main()
{
unordered_map<string,int> A;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    string x;
    cin>>x;
     A[x]++;
}

for(auto it : A)
{
  cout<<it.first<<" "<<it.second<<endl;
}
return 0;
}