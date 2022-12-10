// babbar dsa sheet
// searching and sorting
// binary search
// book alocation

#include <bits/stdc++.h>
using namespace std;

bool solution_valid(int A[], int n, int m, int mid)
{
    int student_count = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > mid)
        {
            return false;
        }
        if (pagesum <= mid)
        {
            pagesum += A[i];
        }
        if (pagesum > mid)
        {
            student_count++;
            if (student_count > m)
            {
                return false;
            }
        }
    }
    return true;
}

int solution1(int A[], int n, int m)
{
    int ans = -1;
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    int e = sum;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (solution_valid(A, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << " Enter the total no of books " << endl;
    cin >> n;
    cout << " Enter the pages of books " << endl;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << " Enter the total no of student to allocate book " << endl;
    int m;
    cin >> m;

    cout << solution1(A, n, m);
    return 0;
}