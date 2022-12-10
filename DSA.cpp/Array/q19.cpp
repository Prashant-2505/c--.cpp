



#include<bits/stdc++.h>
using namespace std ;
int left(int A[],int n,int key)
{
    int ans{0};
    int start =0;
    int end = n-1;
    while(start<= end)
    {
    int mid = start + (start+end)/2;
     if (key == A[mid])
     {
        ans = mid;
        end = mid-1;
     }
     else if (key>A[mid])
     {
        start = mid +1;
     }
     else
     {
        end = mid-1;
     }
    }
    return ans;
}
int main()
{
int A[5] = { 1,2,2,2,3};
cout<<left(A,5,2);
return 0;
}