// liner search using recursion

#include <bits/stdc++.h>
using namespace std;

bool linear(int A[], int n,int k)
{
    if (n==0)
    {
        return false;
    }

    if(A[0]==k)
    {
        return true;
    }
    return linear(A+1,n-1,k);
}

int main()
{

    int n;
    cout << " enter the size of elemnt " << endl;
    cin >> n;
    int *A = new int[n];

    cout << " Enter the element of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int key;
    cout << " enter the key" << endl;
    cin >> key;

    bool ans = linear(A, n,key);
    if (ans)
    {
        cout << " present ";
    }
    else
    {
        cout << " absent";
    }
    return 0;
}