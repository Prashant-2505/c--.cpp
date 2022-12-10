//      55555
//      4444
//      333
//      22
//      1





#include<iostream>
using namespace std;

int main()
{

    int i,j;
    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        cout<<i,j;
        cout<<endl;
    }

    return 0;
}