#include<iostream>
using namespace std;

struct array
{
    int A[20];
    int length;
};

void display(struct array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
int main()
{
    struct array arr;
    int n;
    cout<<" ENter the length of the array ";
    cin>>n;
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0;i<n; i++)
    {
        cin>>arr.A[i];
    }
    arr.length=n;

display(arr); 

}
