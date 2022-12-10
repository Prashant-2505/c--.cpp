#include<iostream>
using namespace std;

int binary_search(int A[100], int key, int n)
{
    int s, e=n-1, mid;
    mid = s +(e-s)/2;   // optimise formula of mid
    while(s<=e)
    {
        if(A[mid] == key)
        return mid;
        else if (A[mid]<key)
        return s = mid+1;
        else if (A[mid]>key)
        return e = mid-1;
    }

    return -1;
}

int main()
{
    int n;
    cout<<" Enter the size of array ";
    cin>>n;
    int A[100];
    cout<<" Enter the elements "<<endl;
    for(int i= 0; i<n; i++)
    {
        cin>>A[i];
    }
    int key;
cout<<" Enter the key to search"<<endl;
cin>>key;
int index = binary_search(A,key,n);
if(index == -1)
cout<<" key is not found ";
else
cout<<" Key is found at index "<<index+1;
}