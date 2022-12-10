// duplicate arra

#include <iostream>
using namespace std;

class array
{
public:
    void duplicate(int arr[], int n)
    {
        int last_duplicate{0};
        for (int i = 0, j = i + 1; i < n; i++)
        {
            if (arr[i]==arr[j] && last_duplicate!=arr[i])
            {
                cout<<arr[i];
                last_duplicate=arr[i];
            }
        }
    }
};

int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    array ARR;
    cout<<" Duplicate is ";
    ARR.duplicate(A,n);

}