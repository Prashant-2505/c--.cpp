// print table


#include<bits/stdc++.h>
using namespace std ;
   
void table (int x,int i)
{   
    if (i>10)
    {
        return ;
    }
    cout<<x<<" * "<<i<<" = "<<x*i<<endl;
    table (x,i+1);
}

int main()
{
int n;
cout<<" Enter the no to print is table "<<endl;
cin>>n;
table(n,1);
return 0;
}