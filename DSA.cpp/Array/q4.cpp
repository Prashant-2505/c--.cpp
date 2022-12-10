#include<bits/stdc++.h>
using namespace std ;
vector<int> wave(vector<int>A,int n)
{
    for (int i=0;i<n;i+=2)
    {
        if (i+1<n)
        {
        swap(A[i],A[i+1]);
        }
    }
    return A;
}
int main()
{
 vector<int> A = {1,2,3,4,5};
 vector<int>ans = wave(A,5);
 for(int i=0;i<A.size();i++)
 {
    cout<<ans[i]<<" ";
 }
return 0;
}