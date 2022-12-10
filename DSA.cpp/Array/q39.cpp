//[find the max of contigous array ]
// [babbar dsa sheet]
//[medium]
//[brute force]
//[time----> O(n^3)]

#include <bits/stdc++.h>
using namespace std;

void sub_array(int A[], int n)
{
    vector<int> subarray {0};
    int max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {

                sum += A[k];
            }
            if (sum > max_sum)
            {
                max_sum = sum;
                subarray.clear();
                subarray.push_back(i);
                subarray.push_back(j);
            }
        }
    }
    cout << " max sum of sub array is " << max_sum<<endl;
    for(int i=subarray[0];i<=subarray[1];i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    sub_array(A, n);
    return 0;
}