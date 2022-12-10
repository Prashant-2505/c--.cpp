// reverse the string

#include<bits/stdc++.h>
using namespace std ;
int main()
{
char name[10];
cin>>name;
int count {0};
for( int i=0;name[i]!='\0';i++)
{
    count ++;
}
cout<<count<<endl;
int len=count;
reverse(name,name+len);
cout<<name;
return 0;
}