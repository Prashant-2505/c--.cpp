// gfg peak element

#include <iostream>
using namespace std;

class Array
{
public:
    int peak(int A[], int n)
    {

        int peak = A[0];
        int last_peak{0};
        int res{0};
        for (int i = 1; i < n; i++)

        {
            if (A[i] > peak && A[i] != last_peak)
            {
                last_peak = A[i];
                 res = i;
            }
        }
        return res;
        return -1;
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
    Array arr;
    cout << arr.peak(A, n);
}