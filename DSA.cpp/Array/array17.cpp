// array rotation by 2 (best approach 1)

#include<iostream>
using namespace std;

void Lrotate_two(int arr[],int n,int d)
{
    int temp[d];
    for(int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for(int i =d;i<n;i++)
    {
        arr[i-d] = arr[i];
    }
    for(int i=0;i<d;i++)
    {
        arr[n-d+i]=temp[i];
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n=5,d=2;
    int arr[n] = {1,2,3,4,5};
    Lrotate_two(arr,n,d);
    display(arr,n);
}