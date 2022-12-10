// leetcode
// sum of two 

#include <iostream>
using namespace std;

class array
{
public:
    void sum(int A[], int n, int k)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (A[i] + A[j] == k)
                {
                    cout << i << " , " << j;
                }
            }
        }
    }
};
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int k;
    cin >> k;
    array Arr;
    Arr.sum(A, n, k);
}