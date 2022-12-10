// first occurence and last occurence of target  [code studio ]   [medium ]
// also find total no occurence 
#include<bits/stdc++.h>
using namespace std ;


// time complexity ---> O(log n)
int lastoccurence(int arr[],int n,int t)
{
    int ans = -1;
    int s = 0;
    int e = n-1;
    while(s<=e)
    {
      
        int mid = (e+s)/2;
        if (arr[mid] == t)
        {
            s = mid+1;
          ans = mid +1;
        }
        else if (t>arr[mid])
        {
            s = mid+1;
        }
        else{
            e = mid -1;
        }
    }
    return ans;
}

int firstoccurence(int arr[],int n,int t)
{
    int ans= -1;
    int s = 0;
    int e = n-1;
    while(s<=e)
    {
      
        int mid = (e+s)/2;
        if (arr[mid] == t)
        {
          e = mid-1;
          ans = mid+1;
        }
        else if (t>arr[mid])
        {
            s = mid+1;
        }
        else{
            e = mid -1;
        }
        
    }
    return ans;
}
int main()
{
int n;
cin>>n;
int A[n];
for(int i=0;i<n;i++)
{
    cin>>A[i];
}
int t;
cin>>t;
cout<<"fist occurence is at "<<firstoccurence(A,n,t); 
cout<<endl;
cout<<"last occurence is at "<<lastoccurence(A,n,t);
cout<<endl;
cout<<" total no of occurence is "<<lastoccurence(A,n,t)-firstoccurence(A,n,t)+1;
return 0;
}