
 
  
#include<bits/stdc++.h>
using namespace std ;

int main()
{
int n;
cout<<" Enter the size of array "<<endl;
cin>>n;

//  int arr[n];                   // intalize array like this intialize its size at run time is very bad practice 
// int arr[1000];                 // you can intailze like this its size at compile time if you want intailize size at run time so intailze it dynamically

int *arr = new  int [n];
cout<<" Enter the elements "<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

int sum=0;
for(int i=0;i<n;i++)
{
    sum += arr[i];
}
cout<<" Sum of elements is "<<sum;


delete [] arr;    // delete the dynamica array [] menation this block to delte the array memory

return 0;
}