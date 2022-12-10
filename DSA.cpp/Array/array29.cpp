// rotation of array by  n 

#include<iostream>
using namespace std;

class solution
{
public:
void swap (int *low,int*high)
{
    int temp = *low;
    *low = *high;
    *high = temp;
}

void reverse(int arr[],int low,int high)
{
    while (low<high)
    {
        swap(&arr[low],&arr[high]);
        low++;
        high--;

    }
}
void rotate (int arr[],int n,int d)
{
    reverse (arr,0,d-1);
    reverse (arr,d,n-1);
    reverse (arr,0,n-1);
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
};
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solution A;
    A.rotate(arr,5,2);
    A.display(arr,n);

}