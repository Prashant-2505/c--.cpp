/*
78. Subsets
Medium



176

Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.

*/


#include <bits/stdc++.h>
using namespace std;

void print(int index, string s, string &ans, int n)
{

    if (index == n)
    {
        cout << ans;
        if (ans.size() == 0)
        {
            cout << "null";
        }
        cout<<endl;
        return;
    }

    ans.push_back(s[index]);
    print(index + 1, s, ans, n);
    ans.pop_back();

    print(index + 1, s, ans, n);
}

int main()
{
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    int n = s.size();

    string ans = "";
    print(0, s, ans, n);

    return 0;
}