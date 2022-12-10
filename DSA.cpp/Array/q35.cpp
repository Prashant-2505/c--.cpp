//  spoj 
// searching ans sorting

#include <bits/stdc++.h>
using namespace std;

bool is_enough(int A[], int n, int h, int mid)
{
    int wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] >= mid)
        {
            wood += A[i] - mid;
        }
    }
    if (wood >= h)
    
        return true;
    
    else
        return false;
}

int min_height(int A[], int n, int h)
{
    int ans = 0;
    int s = 0;
    int e = *max_element(A, A + n);
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (is_enough(A, n, h, mid))
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << " Enter the trees " << endl;
    cin >> n;
    int A[n];
    cout << " enter the tree max height " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int h;
    cout << " enter the min wood height required " << endl;
    cin >> h;

    cout << min_height(A, n, h);
    return 0;
}