#include <iostream>
using namespace std;

int main()
{
    int A[]={1,2,3,4,5,6,7};
    int key,low{0},high{6},mid;
cout<<"Enter the key ";
cin>>key;
    while (low <= high)
    {
         mid = (low + high) / 2;

        if (A[mid] == key)
        {
            cout << " Key is found " << mid;
            exit(0);
        }
        else if (key < A[mid])
            high = mid - 1;

        else
            low = mid + 1;
    }

    cout << " key is no found";
    return 0;
}