/*
442. Find All Duplicates in an Array
Medium

273

Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice,
 return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.



Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
Example 3:

Input: nums = [1]
Output: []
*/

#include <bits/stdc++.h>
using namespace std;

// brute force
// time complexity ---> o(n^2)
// space complexity ---> o(n)
vector<int> solution1(vector<int> A, int n)
{
    vector<int> ans;
    sort(A.begin(), A.end());
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] == A[j])
            {
               ans.push_back(A[i]);
            }
        }
    }
    return ans;
}


// optimized solution 
// time complexity ---> o(log (n)) + o(log (n)) === o(log (n))
// space complexity ---> o(n)
void solution2 (vector<int> B,int n)
{
    map<int,int> M;
    for(auto it : B)
    {
        M[it]++;
    }
   for(auto bt: M)
   {
    if(bt.second>1)
    {
       cout<<bt.first<<" ";
    }
   }
}

int main()
{
    int n;
    cin >> n;
    vector<int> V;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        V.push_back(x);
    }


    // vector<int> temp = solution1(V, n);
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     cout << temp[i] << " ";
    // }

solution2(V,n);
   
    return 0;
}
