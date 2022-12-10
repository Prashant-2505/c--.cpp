#include<bits/stdc++.h>
using namespace std ;
   
int main()
{
int A[5] = {4,2,3,1,5,};

stack<int> st;
st.push(-1);
vector<int>v(5);

for(int i=5-1;i>=0;i--)
{
    while(st.top()>=A[i])
    {
        st.pop();
    }
   v[i]=st.top();
   st.push(A[i]);
}

for(auto it: v)
{
    cout<<it<<" ";
}
return 0;
}