// binary search using recursion


#include <bits/stdc++.h>
using namespace std;

int linear(int A[], int n, int key, int s, int e)
{
   
    if (s > e)
    {
        return -1;
    }
     int mid = s + (e - s) / 2;
    if (A[mid] == key)
    {
        return mid;
    }
    if (A[mid] < key)
    {
        return linear(A, n, key, mid + 1, e);
    }
   else
    {
        return linear(A, n, key, s, mid - 1);
    }
}

int main()
{
    int n;
    cout << " Enter the size of array" << endl;
    cin>>n;
    int *A = new int[n];
    cout << " Enter the element of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int key;
    cout << " Enter the key to search" << endl;
    cin >> key;

    int s = 0;
    int e = n - 1;

 cout<<key<<" is present at index "<<linear(A, n, key, s, e);
    
    return 0;
}