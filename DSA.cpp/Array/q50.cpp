/*
907. Sum of Subarray Minimums
Medium

5132

349

Add to List

Share
Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. Since the answer may be large, return the answer modulo 109 + 7.

 

Example 1:

Input: arr = [3,1,2,4]
Output: 17
Explanation: 
Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. 
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
Sum is 17.
Example 2:

Input: arr = [11,81,94,43,3]
Output: 444

*/


// tc = O(n^2)
// sc = O(n)

#include <bits/stdc++.h>
using namespace std;

long long int sub(vector<int> v)
{
    int res = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i; j < v.size(); j++)
        {
            vector<int> ans;
            for (int k = i; k <= j; k++)
            {
                ans.push_back(v[k]);
            }
            int mini = ans[0];
            for (int i = 1; i < ans.size(); i++)         // we can create its seprate function then it will give tc = O(n^2)
            {
                if(ans[i]<mini)
                mini = ans[i];
            }
            res +=mini;
        }
    }
    return res;
}

int main()
{
    int n;
    cout << "enter the size of n" << endl;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
 

    cout << sub(v);
    return 0;
}