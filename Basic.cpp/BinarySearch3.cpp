#include<iostream>
using namespace std;

int main()
{

    int A[] = {2,3,5,6,7,12,13,14,15,17,23,34,45,56};
    int mid,low{0},high{13},key;
    
    cout<<" Enter the key"<<endl;
    cin>>key;

    while (low<=high)
    {
        mid = (low+high)/2;
        if (key == A[mid])
        {
            cout<<" Key is found at index "<<mid;
            exit(0);
        }
        else if (key<A[mid])
        high = mid-1;
        else
        low = mid+1;      
    }
    cout<<"key not found";

    return 0;
}