/*
9. Sqrt(x)
Easy

Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.

 

Example 1:

Input: x = 4
Output: 2
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.
 

Constraints:

0 <= x <= 231 - 1
*/

#include<bits/stdc++.h>
using namespace std ;
int square_root(int t)
{
    int s = 0;
    int e = t;
  long long int ans = -1;
    while(s<=e)
    {
       long long int mid = s+ (e-s)/2;
        if (mid*mid==t)
        {
            return mid;
        }
        if (mid*mid<t)
        {
            s = mid +1;
            ans = mid;
        }
        else
        {
            e = mid-1;
        }
    }
    return ans;
}
int main()
{
int a;
cin>>a;
cout<<square_root(a);
return 0;
}