// duplicates element using recursion

#include <bits/stdc++.h>
using namespace std;

bool duplicate(int A[], int n)
{
    if (n == 0)
    {
        return false;
    }
    if (A[0] == A[1])
    {
        return true;
    }
    else
    {
        return duplicate(A+1,n-1);
    }
   
}

int main()
{
    int n;
    cout << " Enter the size of array" << endl;
    cin >> n;
    int *A = new int[n];
    cout << " Enter the element of array in ascending order " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    bool ans = duplicate(A, n);
    if(ans)
    cout<<" Dipliacte elements";
    else
    cout<<" non-duplicate elements";
    return 0;
}