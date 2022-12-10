// duplicates in unsorted array

#include <iostream>
using namespace std;

void duplicate(int A[], int n)

{
    for (int i = 0; i < n - 1; i++)
    {
        int count{1};
        if (A[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (A[i] == A[j])
                {
                    count++;
                    A[j] = -1;
                }
            }
            if (count > 1)
            {
                cout << A[i] << " occur " << count<<endl;
            }
        }
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
    duplicate(A, n);
}
