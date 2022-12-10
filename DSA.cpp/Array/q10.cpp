// leetcode 121 best time to buy and sell stock
// incomplete ans


#include <iostream>
using namespace std;

class array
{
public:
    int stock(int A[], int n)
    {
        int min =A[0];
        for(int i=1;i<n;i++)
        {
            if(A[i]<min)
            {
                min = A[i];
            }
        }

        cout<<" min is "<<min<<endl;
        if (min != A[n-1])
        {
        int max = A[min];
        for(int j = A[min];j<n;j++)
        {
          if (A[j]>max)
          {
            max = A[j];
          }
        }
         cout<<" max is "<<max<<endl;
         return max-min;
        }
        return 0;
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
    array Arr;
    cout << Arr.stock(A, n);
    return 0;
}