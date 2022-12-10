// [ kadnane,s algo]
// [ find max of contigous sub array ]
// [ with the sub array]


#include<bits/stdc++.h>
using namespace std ;
void maxSUBARRAY(int A[],int n)
{
    vector<int>subarray;
    int s =0;
    int sum=0;
    int max_sum = A[0];
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
       if(sum>max_sum)
       {
        max_sum = sum;
        subarray.clear();   
        subarray.push_back(s);
        subarray.push_back(i);
       }
       if (sum<0)
       {
        sum =0;
        s = i+1;
       }
    }
    cout<<" max sum of sub array is "<<max_sum<<endl;
    cout<<" sub array is ";
    for(int i=subarray[0];i<=subarray[1];i++)
    {
        cout<<A[i]<<" ";
    }
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

maxSUBARRAY(A,n);
return 0;
}