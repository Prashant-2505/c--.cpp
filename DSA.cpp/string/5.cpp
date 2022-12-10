
// reverse the word of strings

#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int N;
    cin>>N;
string phrase [N];
for(int i=0;i<N;i++)
{
    cin>>phrase[i];
}

reverse(phrase,phrase+N);
for(int i=0;i<N;i++)
{
    cout<<phrase[i]<<" ";
}
return 0;
}