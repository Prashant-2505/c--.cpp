// structure of array store in heap

#include<iostream>
using namespace std;

struct array 
{
    int *A;
    int size;
    int length;
};

void display (struct array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i];
    }
}
int main()
{
    struct array arr;
    int n;
    cout<<"Enter the size of array ";
    cin>>arr.size;
    arr.A=new int[arr.size]; 
    arr.length=0;

cout<<" ENter the length of array"<<endl;
cin>>n;
cout<<" ENter the elements of array"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr.A[i];
} 
arr.length=n;  

display(arr);

}
