#include<iostream>
using namespace std;

 int maxim(int a, int b, int c=0)
    {
        return a>b&&a>c?a: (b>c?b:c);
    }

int main()
{
    cout<<maxim(12,11)<<endl;
    cout<<maxim(23,11,1)<<endl;
    cout<<maxim(23,234,4)<<endl;
    return 0;
}

