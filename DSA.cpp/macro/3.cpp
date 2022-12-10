// defining array in macros


#include<bits/stdc++.h>
using namespace std ;
  # define ele 1,2,3 
int main()
{
int arr[]= {ele};
for(int i=0;i<3;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}