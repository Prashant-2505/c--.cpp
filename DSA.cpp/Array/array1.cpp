// increasing the size of array 

#include<iostream>
using namespace std;

int main() 
{

   int *p;
   p = new int [5];
for(int i=0; i<5;i++)
{
    cin>>p[i];
}
for(int i=0; i<5;i++)
{
    cout<<p[i]<<" ";
}
cout<<endl;
   int *q;
   q = new int [10];
   for(int i=0;i<5;i++)
   {
    q[i] = p[i];
   }
   
   for(int i=0; i<5;i++)
{
    cout<<q[i]<<" ";
}
cout<<endl;

delete []p;
p=q;
q = nullptr;

for(int i=5;i<10;i++)
{
    cin>>p[i];
}


for(int i=0;i<10;i++)
{
    cout<<p[i]<<" ";
}

}