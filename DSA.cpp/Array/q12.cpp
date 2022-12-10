/*
9. Intersection of Two Arrays
Easy


Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 

Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> A, vector<int> B)
{
    vector<int> result;
    int last = -1;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < B.size(); j++)
        {
            if (A[i] == B[j] && A[i] != last)
            { 
                result.push_back(A[i]);
                last = A[i];
            }
        }
    }
    return result;
}

int main()
{
    vector<int> A{12, 9, 10, 11};
    vector<int> B{9, 4, 9};
    vector<int> ans = solution(A, B);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}