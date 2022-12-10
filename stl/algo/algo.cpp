#include<bits/stdc++.h>
using namespace std ;
int main()
{
vector<int> A;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    A.emplace_back(x);
}
int it = *min_element(A.begin(),A.end());
cout<<"minimum element is "<<it<<endl;
int bt = *max_element(A.begin(),A.end());
cout<<"maximum element is "<<bt<<endl;
int ct = accumulate(A.begin(),A.end(),0);
cout<<" sum of vector is "<<ct<<endl;
int dt = count(A.begin(),A.end(),1);
cout<<dt<<" times appers "<<endl;
int et = *find(A.begin(),A.end(),3);
cout<<et<<" present is prsent "<<endl;
reverse(A.begin(),A.end());
for(auto it : A)
{
   cout<<it<<" ";
}
cout<<endl;

string s = "abcdefgh";
reverse(s.begin(),s.end());
for(auto bt : s)
{
    cout<<bt<<" ";
}

return 0;
}