#include<bits/stdc++.h>
using namespace std ;
   
int main()
{
string s ;
cin>>s;
string z;
stack<char>st;
for(auto it:s)
{
   st.push(it);
}

while(!st.empty())
{
   z.push_back(st.top());
    st.pop();
}

cout<<z;
return 0;
}