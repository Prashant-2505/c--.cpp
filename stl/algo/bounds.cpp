// using array 

#include <bits/stdc++.h>
using namespace std;
void find(int A[], int n, int X)
{
    int *p = lower_bound(A, A + n, X);
    if(p==A+n)
    cout<<" NOT FOUND ";
   else  cout << *p;
}
void find2(int A[], int n, int X)
{
    int *p = upper_bound(A, A + n, X);
    if(p==A+n)
    cout<<" NOT FOUND ";
   else  cout << *p;
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

    cout << " Array before sorted " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    sort(A, A + n);
    cout << " Array after sorted " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
    int X;
    cout << " Which element you want to find ";
    cin >> X;
    find(A, n, X);
    cout<<endl;
    find2(A,n,X);
    return 0;
}