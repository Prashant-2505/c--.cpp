#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9]{-1, 4, 3, -2, 9, 4, -1, 3, -5};
    int n = 9;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            v.push_back(arr[i]);
        }
    }


    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            v.push_back(arr[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = v[i];
    }

    for (int i = 0; i < n; i++)
    {
       arr[i]=v[i];
    }
   
  for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
    return 0;
}