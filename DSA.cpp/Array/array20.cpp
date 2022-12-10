// get
// set
// min,max
// sum,average



#include <iostream>
using namespace std;

int get(int A[], int i)
{
    return A[i];
}

void set(int A[], int index, int x)
{
    A[index] = x;
}

int max(int A[], int n)
{
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
            max = A[i];
    }
    return max;
}

int min(int A[], int n)
{
    int min = A[0];
    for (int i = 0; i < n; i++)
    {
        if (min > A[i])
            min = A[i];
    }
    return min;
}

int sum(int A[], int n)
{
    int sum{0};
    for (int i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }
    return sum;
}

int avg(int A[], int n)
{
    int average = sum(A, n) / n;
    return average;
}
int main()
{
    int n = 9;
    int A[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << get(A, 3) << endl;
    set(A, 0, 11);
    cout << "max element is " << max(A, n) << endl;
    cout << "min element is " << min(A, n) << endl;
    cout << "Sum of element is " << sum(A, n) << endl;
    cout << " Average of element is " << avg(A, n) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}