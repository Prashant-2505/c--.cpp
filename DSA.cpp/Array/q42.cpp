//[merging two sorted array without taking extra space ]
// [ babbar dsa sheet]
// [time complexity --->  o(n)]
// [space complexity ---> o(1)]


#include<bits/stdc++.h>
using namespace std ;
void merge (int A[],int n,int B[],int m)
{
     int i = n-1;
     int j= m-1;
     int k = m+n-1;
     while(i>=0 && j>=0)
     {
        if (A[i]>B[j])
        {
            A[k] = A[i];
            k--;
            i--;
        }
        else
        {
            A[k]=B[j];
            k--;
            j--;
        }
       
     }
      while(i>=0)
        {
            A[k]=A[i];
            k--;
            i--;
        }
  while(j>=0)
        {
            A[k]=B[j];
            k--;
            j--;
        }
}
int main()
{

    int n ;
    cout<<" enter the size of array 1 ---> ";
    cin>>n;
    int o ;
    cout<<" enter the length of array 1---> ";
    cin>>o;

    int A[n] ;
    for(int i=0;i<o;i++)
    {
        cin>>A[i];
    }

int m ;
cout<<" Enter the length of array 2 who not exceed the size of array 1 ---> ";
cin>>m;
int B[m] ;
 for(int i=0;i<m;i++)
    {
        cin>>B[i];
    }
merge(A,o,B,m);
cout<<" array after merging both array is -----> "<<endl;
for(int i=0;i<n;i++)
{
    cout<<A[i]<<" ";
}
return 0;
}