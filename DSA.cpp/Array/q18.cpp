// uniqe no 

#include<bits/stdc++.h>
using namespace std ;
int main()
{

int A[] {1,1,2,2,3,3,4};
for(int i=0;i<7;i++)
{
    for(int j=i+1;j<7;j++)
    {
        if (A[i]!= A[j])
        {
             cout<<A[i];
        }
       
    }

}

return 0;
}