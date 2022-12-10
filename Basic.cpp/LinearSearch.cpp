#include<iostream>
using namespace std;

int main()
{

    int A[5], n{5}, key;                              
    cout<<" Enter the numbers "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
 
    cout<<" Enter key "<<endl;
    cin>>key;

    for(int i = 0; i<n; i++ )
    {
        if(A[i]==key)
        {
            cout<<" Key found at "<<i;
            return 0 ;
        }
    } 
cout<<" Key not found ";

    return 0;
    }
