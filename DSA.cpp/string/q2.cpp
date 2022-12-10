// max occuring character in string

#include<bits/stdc++.h>
using namespace std ;
char maxoccur (string str){
    char ans;
    int maxfreq = 0;
    int len = str.length();
    int count[256] {0};
    for(int i=0;i<len;i++)
    {
        count[str[i]]++;
        if (count[str[i]] > maxfreq)
        {
            maxfreq = count[str[i]];
            ans = str[i];
        }
    }
return ans;
}
int main()
{
  string s;
  cin>>s;
  cout<<maxoccur(s);
return 0;
}