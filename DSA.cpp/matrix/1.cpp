// linear search 


#include<bits/stdc++.h>
using namespace std ;

void ans (int A[][4],int n,int m,int t)
{
      for(int i=0;i<4;i++)
      {
        for(int j=0;j<4;j++)
        {
            if(A[i][j]==t)
            {
                cout<<" target is prensent at index "<<A[i][j];
            }
        }
      }
      cout<<" Not present ";
}
int main()
{
int n=4;

int m=4;

int A[4][4];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>A[i][j];
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
}
int t;
cout<<"enter the target"<<endl;
cin>>t;
ans(A,4,4,t);
return 0;
}