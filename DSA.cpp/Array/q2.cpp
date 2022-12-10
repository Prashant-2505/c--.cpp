// max and min in one search
// time complexity = o(n^2)  beacuse of two for loop running for n time


#include <iostream>
using namespace std;

class array
{
public:
    void max_min(int A[], int n)
    {
        int max, min = A[0];
        for (int i = i; i < n; i++)
        {
            if (A[i] < min)
            {
                min = A[i];
            }
            else if (A[i] > max)
            {
                A[i] > max;
                max = A[i];
            }
        }
        cout<<" max is "<<max<<endl;
        cout<<" min is "<<min<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    array Arr;
    Arr.max_min(A,n);
}