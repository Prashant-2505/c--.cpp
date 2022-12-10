// binary search algo
//  recursive binary search algo

#include <iostream>
using namespace std;

class array
{
public: 
    int A[20] = {1, 3, 5, 7, 8, 90, 12, 34, 56, 78}, length, size;

    array()
    {
        A[20];
        length = 10;
    }
    void display()
    {
        cout << " Elements are " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
    }

    int bin_search(int key)
    {
        int low{0}, high{length - 1};

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (key == A[mid])
            {
                cout << " Key is found at ";

                return mid;
            }
            else if (key < A[mid])

                high = mid - 1;

            else
                low = mid + 1;
        }
        return -1;
    }

    // recursive algo of binary search

    int recursive_bin_search(int key, int l, int h)
    {

        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (key == A[mid])
            {
                cout << " key is found at ";
                return mid;
            }
            else if (key < A[mid])
                return recursive_bin_search(key, l, mid - 1);
            else
                return recursive_bin_search(key, mid + 1, h);
        }
        return -1;
    }
};
int main()
{
    array a;
    cout << a.bin_search(56) << endl;
    a.recursive_bin_search(56, 0, a.length - 1);
    a.display();
}