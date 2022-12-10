#include<iostream>
using namespace std;
int x=90;
int main()
{

    int x = 10;
    {
         cout<<::x<<endl;
        int x= 20;
        cout<<x<<endl;
    }
    cout<<x<<endl;
   

    return 0;
}
