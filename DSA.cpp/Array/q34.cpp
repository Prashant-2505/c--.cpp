/*
Aggresive cow [code studio]
[medium]
*/

#include<bits/stdc++.h>
using namespace std ;

bool can_place(int A[],int n, int c,int mid)
{
    int distance = mid;
    int cow_count = 1;
    int position = A[0];
    for(int i=1;i<n;i++)
    {
        if (A[i]-A[0]>=distance)
        {
            cow_count++;
            position = A[i];
        }
        if (cow_count==c)
        {
            return true;
        }
    }
    return false;
}

int aggrsive_cows(int A[],int n, int c)
{
     sort (A,A+n);
     int start = A[0];
     int end = A[n-1]-A[0];
     int ans = -1;
     while (start<=end)
     {
        int mid = start+(end-start)/2;
        if (can_place(A,n,c,mid))
        {
            ans = mid;
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

int n;
cout<<" enter the total no of stails "<<endl;
cin>>n;
int A[n];
cout<<" enter th position of stails "<<endl;
for(int i=0;i<n;i++)
{
    cin>>A[i];
}
int c;
cout<<" enter the no of aggresive cow to placed "<<endl;
cin>>c;

cout<<aggrsive_cows(A,n,c);
return 0;
}