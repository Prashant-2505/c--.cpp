#include<bits/stdc++.h>
using namespace std ;
   
int main()
{
map<int ,int> M;

M[1] = 100;
M[1] = 400;
M[2] = 200;
for(auto it : M)
{
    cout<<it.first<<" "<<it.second<<endl;
}
return 0;
}