// map of pair both element and key

#include<bits/stdc++.h>
using namespace std ;
int main()
{
map<pair<string,string>,pair<string,string>> A;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    string fn1,ln1,fn2,ln2;
    cin>>fn1>>ln1>>fn2>>ln2;
     A[{fn1,ln1}];
     A[{fn2,ln2}];
}

for(auto pr : A)
{
    auto person1 = pr.first;
    auto person2 = pr.second;
    cout<<person1.first<<" "<<person1.second<<"  "<<person2.first<<" "<<person2.second<<endl;
}
return 0;
}