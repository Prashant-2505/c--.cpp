// leet code 35 search insert position

// complexity is o(n)
// use binary search fro o(log(n))

#include <iostream>
using namespace std;

class array
{
public:
// o(log(n))
int insert2(int A[],int n,int target )
{
   int start = 0;
   int end = n-1;
   while(start<=end)
   {
    int mid = start +(end-start)/2;
    if(target == A[mid])
    {
        return mid;
    }
    else if (A[mid]<target)
    {
        start = mid+1;
    }
    else
    {
        end = mid -1;
    }
   }
   return start;
}

// o(n)
    int insert(int A[], int n, int target)
    {
        for (int i = 0; i < n; i++)
        {
            if (A[i] >= target)
            {
                return i;
            }
        }
        return n ;
    }
};

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        
    }
    int target;
    cin >> target;

    array Arr;
    cout<<Arr.insert2(A,n,target);
} 