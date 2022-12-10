// code studio [find triplets]    [medium]


#include <bits/stdc++.h>
using namespace std;

// brute force 
// time complexty ---> o(n^3)
vector<int> solution1(vector<int> A, int t)
{
    sort(A.begin(),A.end());
    vector<int> ans;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i+1; j < A.size(); j++)
        {
            for (int k = j+1; k < A.size(); k++)
            {
                if (A[i] + A[j] + A[k] == t)
                {
                    ans.push_back(A[i]);
                    ans.push_back(A[j]);
                    ans.push_back(A[k]);
                   
                }
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> A;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    int target;
    cin >> target;

    vector<int> temp = solution1(A,target);
  for(int i=0;i<temp.size();i++)
  {
    cout<<temp[i]<<" ";
  }
    return 0;
}