// [babbar dsa sheet ]
//[ maximum distance of tallest and shortest tower]


#include <bits/stdc++.h>
using namespace std;
void ans(int A[], int n, int k)
{
    sort(A,A+n);
    int ans = A[n-1]-A[0] ;
    for(int i=1;i<n;i++)
    {
          int min_ele = min(A[0]+k,A[i]-k);
          int max_ele = max(A[n-1]-k,A[i-1]+k);
          if(min_ele<0)
          {
            continue;
          }
          int difference = max_ele-min_ele;
          ans = min(ans,difference);
    }
   cout<<ans;
}
int main()
{
    int n = 5;
 
    int A[n] = {3,9,12,16,20};
   
    int k = 3;
    
    ans(A, n, k);
    return 0;
}