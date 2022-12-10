//[leetcode][231][power of 2]

#include <bits/stdc++.h>
using namespace std;
bool sum(int n)
{   
     if(n<1)
     {
          return false;
     }
   if(n==1)
     {
          return true;
     }
     if(n%2==1)
     {
          return false;
     }
     
    return (sum (n/2));
}

int main()
{
     int n;
     cin >> n;
     cout<<sum(n);
     return 0;
}