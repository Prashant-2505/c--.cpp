#include<iostream>
using namespace std;

int main()
{
int clif_end{10};
int i = 0;

while (clif_end > i)
{
    i = i+1;
    cout<<" Run "<<i<<endl;
   
}

if (i==clif_end)
{
    cout<<" we are at end of cliff "<<endl;
}
else if(i>clif_end);
cout<<" Falling from the cliff "<<endl;


    return 0;
}