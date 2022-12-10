
// power of int
// time complexity o(n)

#include<bits/stdc++.h>
using namespace std ;
int main()
{
int n,m;
cout<<" enter the no and it power"<<endl;
cin>>n>>m;
int res=1;
for(int i=0;i<m;i++)
{
     res = res * n ;
}
cout<<" power of "<<n<<" of "<<m<<" is "<<res;
return 0;
}