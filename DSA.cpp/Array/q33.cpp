#include<bits/stdc++.h>
using namespace std ;

bool is_valid(int A[],int n,int m, int mid)
{
    int time_count {0};
    int chapters = 1;
    for(int i=0;i<n;i++)
    {
         if (time_count + A[i]<=mid)
         {
            time_count +=A[i];
         }
         else
         {
            chapters++;
            if (time_count > m || A[i]>mid)
            {
                return false;
            }
            time_count = A[i];
         }
         if (time_count > m)
         {
            return false;
         }
    }
    return true;
}
int solution1(int A[],int n,int m)
{
    int ans = -1;
    int s = 0;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum =+ A[i];
    }
    int e = sum;
    while(s<=e)
    {
         int mid = s + (e-s)/2;
        if (is_valid(A,n,m,mid))
        {
            ans = mid;
            e=mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<" enter the total chapters ";
    cin>>n;
    int A[n];
    cout<<" enter the time takken to study these chapters "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int m;
    cout<<" enter the days to study all the chapters ";
     cin>>m;
     cout<<solution1(A,n,m);

return 0;
}