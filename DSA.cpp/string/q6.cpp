
// count all vowels in string

#include<bits/stdc++.h>
using namespace std ;
int main()
{
string s = "aeiou";
int count =  0;
for(int i=0;i<s.length();i++)
{
    if (s[i]=='a' ||  s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
    {
       count ++;
    }
}
cout <<count ;
return 0;
}