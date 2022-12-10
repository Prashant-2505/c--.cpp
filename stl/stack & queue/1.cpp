// stack
#include<bits/stdc++.h>
using namespace std ;
int main()
{
stack<int> A;
A.push(1);
A.push(2);
A.push(3);
A.push(4);
A.push(5);
while(!A.empty())
{
    cout<<A.top();
     A.pop();
}
return 0;
}