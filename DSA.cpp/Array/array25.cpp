// merging of two sorted array 
// if there is same elemnt in both take array take from only one of array

#include <iostream>
using namespace std;

void merge(int A[], int B[], int C[], int n, int m)
{
    int i{0}, j{0}, k{0};
    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else if (B[j] < A[i])
        {
            C[k] = B[j];
            j++;
            k++;
        }

        else 
        {
            C[k] = A[i];
            k++;
            j++;
           
        }
    }
   while(i<n)
   C[k++]=A[i++];
   while(j<m)
   C[k++]=B[j++];


}

int main()
{
    int n = 5;
    int m = 5;
    int A[n]{1, 3, 6, 7, 9};
    int B[m]{2, 4, 6, 8, 10};
    int C[m+n];
    merge(A, B, C, n, m);
    for (int i = 0; i < n + m; i++)
    {
        cout << C[i] << " ";
    }
    return 0;
}