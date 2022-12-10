// missing element in sorted array

#include <iostream>
using namespace std;

void missing(int A[], int size,int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + A[i];
    }
    int s =  size* (size + 1) / 2;
    if (sum < s)
    {
        int miss = s - sum;
        cout <<"missing element is " <<miss;
    }
}

int main()
{
    int size ;
    cout<<" size of arry ";
    cin>>size;
    int A[size];
    int length;
    cout<<" length of array ";
    cin>>length;
    for (int i = 0; i < length; i++)
    {
        cin>>A[i];
    }
    missing(A,size,length);
}