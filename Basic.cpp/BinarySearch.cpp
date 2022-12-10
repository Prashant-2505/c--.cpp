#include <iostream>
using namespace std;

int main()
{

    int A[] = {12, 13, 15, 22, 24, 27, 32};
    int h{6}, l{0}, key;
    int mid{0};

    cout << " Enter the key ";
    cin >> key;

    while (l <= h)
    {
        mid = (l + h )/ 2;
        if (key == A[mid])
        {
            cout << " Key found " << mid;
            return 0;
        }
        else if (key < A[mid])
        
            h = mid - 1;
        
        else 
            l = mid + 1;
    }
        cout<<" Not found "<<endl;
    
            
    return 0;
}