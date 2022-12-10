#include<iostream>
using namespace std;

void demo(int n)
{
    if(n>0)
    {
        cout <<n<<endl;
        demo(n-1);
    }
}
int main()
{
int x=10;
demo(x);
    return 0;
}