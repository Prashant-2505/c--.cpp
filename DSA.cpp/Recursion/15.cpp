// sum of n natural no

#include <bits/stdc++.h>
using namespace std;

int sum(int x)
{  int ans ;
    if(x==0)
    {
        return 0;
    }
    // cout<<x<<endl;
  ans = x + sum(x-1); ;
 
   
   return ans;
}

int main()
{
    int n;
    cout << " enter the no ftorm where to find sum" << endl;
    cin >> n;

    cout << sum(n);
    return 0;
}