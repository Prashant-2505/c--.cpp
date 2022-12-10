#include<iostream>
using namespace std;

int main()
{
    int count=1;
    int i,j,n;
    cin>>n;
    for(i=0; i<n; i++)
    {

       for(j=0; j<i; j++)
       {
        cout<<"   "<<count;
         count=count+1;
       }
          cout<<endl;
    }

   
    return 0;
}
